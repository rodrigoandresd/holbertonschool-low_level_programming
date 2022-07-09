#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: funtion
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	s3 = malloc(i + n + 1);
	if (s3 == NULL)
		return (NULL);
	for ( k = 0 ; K < (i +n) ; k++)
	{
		if (k < i)
			s3[k] = *s1, s1++;
		else
			s3[k] = *s2, s2++;
	}
	s3[k] = '\0';
	return (s3);
}

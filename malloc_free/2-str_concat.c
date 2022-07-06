#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return:
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, length = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	length = i + j;
	s3 = malloc((sizeof(char) * length) + 1);

	if (s3 == NULL)
		return (NULL);

	j = 0;

	while (k < length)
	{
		if (k <= i)
			s3[k] = s1[k];

		if (k >= i)
		{
			s3[k] = s2[j];
			j++;
		}

		k++;
	}
	s3[k] = '\0';
	return (s3);
}


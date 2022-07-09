#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0;
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
		n = i + j;

	s3 = malloc((sizeof(char) * n + 1);

	if (s3 == NULL)
		return (NULL);

	j = 0;

	while (k < n)
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
	s[k] = '\0';
	return (s3);
}


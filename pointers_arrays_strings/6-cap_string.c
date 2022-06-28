#include <stdio.h>
#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @w: pointer
 * Return: w
 */

char *cap_string(char *w)
{
	int i, j;

	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; w[i] != '\0' ; i++)
	{
		if (i == 0 && w[i] >= 'a' && w[i] <= 'z')
			w[i] -= 32;

		for (j = 0 ; j < 13 ; j++)
		{
			if (w[i] == separators[j])
			{
				if (w[i + 1] >= 'a' && w[i + 1] <= 'z')
				w[i + 1] -= 32;
			}
		}
	}
	return (w);
}


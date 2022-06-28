#include <stdio.h>
#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @up: pointer
 * Return: up
 */

char *cap_string(char *)
{
	int i;

	i = 0;

	while (up[i] != '\0')
	{
		if (up[i] >= 'a' && up[i] <= 'z')
			up[i] = up[i] - 32;
		up++;
	}
	return (up);
}


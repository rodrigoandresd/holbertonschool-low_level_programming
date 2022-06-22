#include <stdio.h>
#include "main.h"

/**
 * rev_string -  prints a string in rev
 * @s: imput
 * Return: 0
 */

void rev_string(char *s)
{
	char rev;
	int  right, half, tmp;

	right = 0;

	while (s[right] != '\0')
	{
		right++;
	}

	half = right - 1;

	for (tmp = 0; tmp < right / 2; tmp++)
	{
		rev = s[tmp];
		s[tmp] = s[half];
		s[half--] = rev;
	}
}


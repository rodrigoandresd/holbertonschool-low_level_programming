#include <stdio.h>
#include "main.h"

/**
 * print_rev -  prints a string in rev
 * @s: phrase
 * Return: 0
 */

void print_rev(char *s)
{
int letter = 0;
	for (letter = 0 ; s[letter] != '\0' ; letter++)
	{
	}
		for (letter = letter - 1 ; letter >= 0 ; letter--)
		{
			putchar(s[letter]);
		}
		putchar('\n');
}


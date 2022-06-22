#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a number second half
 * @str: imput
 * Return: 0
 */

void puts_half(char *str)
{
	int input, half, max;

	input = 0;
	while (str[input] != '\0')
	{
		input++;
	}
	max = input;
	half = max / 2;
	while (half <= max)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}


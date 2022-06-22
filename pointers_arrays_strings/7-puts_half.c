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
	if (max % 2 == 0)
		half = max / 2;
	else
		half = (max + 1) / 2;

	for (input = half ; input < max ; input++)
	{
		putchar(str[input]);
	}
	putchar('\n');
}


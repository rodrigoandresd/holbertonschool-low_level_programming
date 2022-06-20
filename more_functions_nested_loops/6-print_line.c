#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code.
 * @n: number to repeat
 * Return: Always 0.
 */

void print_line(int n)
{
	char underscore;

for (underscore = 0 ; underscore < n ; underscore++)
	{
	_putchar('_');
	}
_putchar('\n');
}


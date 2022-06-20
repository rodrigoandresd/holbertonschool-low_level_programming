#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: number to repeat
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	char space;

for (space = 0 ; space < n ; space++)
	{
	_putchar(' ');
	}
_putchar('\\');
_putchar('\n');
}


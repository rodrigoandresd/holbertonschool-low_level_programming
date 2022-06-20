#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: number to repeat
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int space, line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0 ; line < n ; line++)
		{
			for (space = 0 ; space < n ; space++)
			{
				if (space == line)
					_putchar('\\');
				else if (space < line)
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}


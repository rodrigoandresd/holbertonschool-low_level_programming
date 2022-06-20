#include <stdio.h>
#include "main.h"

/**
 * print_square - check the code.
 * @size: number
 * Return: Always 0.
 */

void print_square(int size)
{
	int line, column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 0 ; line < size ; line++)
		{
			for (column = 0 ; column < size ; column++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}


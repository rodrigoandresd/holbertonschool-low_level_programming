#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check the code.
 * @size: number
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int line, column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1 ; line <= size ; line++)
		{
			for (column = 1 ; column < size ; column++)
			{

				_putchar(' ');
			}
			for (column = 1 ; column <= line ; column++)
                        {

                                _putchar('#');
                        }

		_putchar('\n');
		}
	}
}


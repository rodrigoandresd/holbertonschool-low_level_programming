#include "main.h"

/**
 * print_last_digit - Check
 * @i: An input character
 * Description: function uses print_last_digit
 * print last digit
 * Return: 0
 */

int print_last_digit(int i)
{
	int l;

	if (i != 0)
	{
	l = i % 10;
	_putchar(l);
	}
	else
	{
	_putchar(i);
	}
	return (l);
}

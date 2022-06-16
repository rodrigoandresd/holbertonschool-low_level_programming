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
	int l = i % 10;

	if (i < 0)
		l = l * -1;

	_putchar(l + '0');

	return (l);
}

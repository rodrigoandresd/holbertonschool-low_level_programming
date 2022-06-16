#include "main.h"

/**
 * print_sign - Check
 * @n: An input character
 * Description: function uses _putchaprint_sign function to print
 * mayor menor o igual a cero
 * Return: 1 >  0 < -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

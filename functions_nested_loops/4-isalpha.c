#include "main.h"

/**
 * _isalpha - Check
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

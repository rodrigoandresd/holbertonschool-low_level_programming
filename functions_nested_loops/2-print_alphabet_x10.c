#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * write alphabet 10 ttimes
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)

{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
		_putchar('\n');

		i++;
	}
}

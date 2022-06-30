#include <stdio.h>

/**
 * _puts_recursion - function that prints a string + new line.
 * @s: pointer
 * returno: 0
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}


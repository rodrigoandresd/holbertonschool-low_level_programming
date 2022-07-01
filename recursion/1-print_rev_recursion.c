#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer
 * returno: 0
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s)
	{
		putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

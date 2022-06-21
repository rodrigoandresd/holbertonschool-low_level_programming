#include <stdio.h>
#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: puts phrase
 * Return: 0
 */

void _puts(char *str)
{
int c = 0;
	while (str[c] != '\0')
	putchar(*str++);
putchar('\n');
}


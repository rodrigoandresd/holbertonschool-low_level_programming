#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a number %two
 * @str: imput
 * Return: 0
 */

void puts2(char *str)
{
	int  number;

	number = 0;
	while (str[number] != '\0')
	{
		if (number % 2 == 0)
		putchar(str[number]);
		number++;
	}
		putchar('\n');
}


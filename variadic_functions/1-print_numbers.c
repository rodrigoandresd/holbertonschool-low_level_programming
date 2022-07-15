#include "variadic_functions.h"

/**
 * print_numbers- function that prints numbers
 * @n: number of arguments
 * @separator: pointer a separator
 * Return: sum of all its arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(ap, int));
			if ((i + 1) != n && separator != NULL)
				printf("%s", separator);
		}
	printf("\n");
	va_end(ap);
}

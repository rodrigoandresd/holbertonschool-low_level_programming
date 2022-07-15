#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @n: number of arguments
 * @separator: pointer a separator
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

		for (i = 0 ; i < n ; i++)
		{
		string = va_arg(ap, char *);
			if (ap == NULL)
			{
				printf("(nil)");
			}
			else
			printf("%s", string);
			if ((i + 1) != n && separator != NULL)
				printf("%s", separator);
		}
	printf("\n");
	va_end(ap);
}

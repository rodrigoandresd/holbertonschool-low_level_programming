#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: type of constan variable
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *separator = "";

	var_type letter[] = {
		{"c", c_char},
		{"i", i_integer},
		{"f", f_float},
		{"s", s_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (letter[j].var_t != NULL)
		{
			if (format[i] == *letter[j].var_t)
			{
				printf("%s", separator);
				letter[j].fp(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * c_char - prints a char
 * @ap: argument - parameter passed from main
 *
 * Return: void
 */

void c_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * i_integer - prints an integer
 * @ap: parameter passed from main
 *
 * Return: void
 */

void i_integer(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * f_float - prints a float
 * @ap: parameter passed from main
 *
 * Return: void
 */

void f_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * s_string - prints a string
 * @ap: parameter passed from main
 *
 * Return: void
 */

void s_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

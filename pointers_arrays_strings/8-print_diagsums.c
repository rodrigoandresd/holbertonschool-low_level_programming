#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that locates a substring.
 * @a: pointer
 * @size: size
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, prod, sumdiag1, sumdiag2;

	prod = size * size;
	sumdiag1 = 0;
	sumdiag2 = 0;

	for (i = 0; i < prod ; i += size + 1)
	{
		sumdiag1 += a[i];
	}
	for (i = size - 1; i < prod - 1; i += size - 1)
	{
		sumdiag2 += a[i];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}


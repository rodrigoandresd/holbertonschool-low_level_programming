#include <stdio.h>
#include "main.h"

/**
 * print_array - prints a number second half
 * @n:  is the number of elements of the array to be printed
 * @a: pointer
 * Return: 0
 */

void print_array(int *a, int n)
{
	int imput;

	for (imput = 0 ; imput < n ; imput++)
	{
	if (imput != (n - 1))
		printf("%d, ", a[imput]);
	else
		printf("%d", a[imput]);
	}
printf("\n");
}

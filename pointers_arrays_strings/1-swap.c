#include <stdio.h>

/**
 * swap_int -funtion takes a pointer to an int
 * @a: variable puntero
 * @b: valor de puntero
 * return: (0)
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}


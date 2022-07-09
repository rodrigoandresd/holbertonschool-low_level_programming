#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that create an array of integers
 * @min: start range
 * @max: end range
 *  Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i, size_range;
	int *array_int;

	size_range = (max - min + 1);
	if (min > max)
		return (NULL);

	array_int = malloc(sizeof(int) * size_range);
	if (array_int == NULL)
		return (NULL);
	for (i = 0 ; i < n ; i++)
		array_int[i] = min++;

	return (array_int);
}

#include "search_algos.h"

/**
 * binary_search -searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is a pointer to the first element of the array to search in
 * @value: is the number of elements in array
 * Return: the temp where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned long int left = 0, right, mid, temp;

	right = size - 1; 
	if (array == NULL)
		return (-1);
	while (left < right)
	{
		temp = left;
		printf("Searching in array: %d", array[temp]);
		for (temp++; temp <= right; temp++)
			printf(", %d", array[temp]);
		printf("\n");
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}



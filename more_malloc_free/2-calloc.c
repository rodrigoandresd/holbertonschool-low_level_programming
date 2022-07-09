#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of the memory space
 * @size: size
 * Return: funtion
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *spc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	spc = malloc(nmemb * size);
	if (spc == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
	spc[i] = 0;
	return (spc);
}

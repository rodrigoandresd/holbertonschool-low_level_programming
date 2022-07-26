#include "lists.h"

/**
 * list_len - function that prints all the elements of a list_t list
 * @h: element imput
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0 ; h != NULL ; count++)
	{
		h = h->next;
	}
	return (count);
}


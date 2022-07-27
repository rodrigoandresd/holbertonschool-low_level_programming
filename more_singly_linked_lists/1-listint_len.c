#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a LL
 * @h: pointer to head that imput
 * Return: the number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0 ; h != NULL ; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}

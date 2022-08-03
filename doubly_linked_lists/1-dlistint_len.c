#include "lists.h"

/**
 * dlistint_len - unction that returns the number of elements in a  dll
 * @h: pointer to head that input
 * Return: the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0 ; h != NULL ; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}


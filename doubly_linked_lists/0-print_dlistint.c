#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlist
 * @h: pointer to head that imput
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)

{
	size_t nodes;

	for (nodes = 0 ; h != NULL ; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

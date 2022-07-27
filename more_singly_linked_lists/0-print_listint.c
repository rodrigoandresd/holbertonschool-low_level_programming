#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head that imput
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0 ; h != NULL ; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);

}

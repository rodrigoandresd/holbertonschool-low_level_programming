#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: element imput
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0 ; H != NULL ; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

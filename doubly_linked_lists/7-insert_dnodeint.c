#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 * @n: n value
 * @h: pointer to pointer head
 * @idx: index of the list where the new node should be added
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL;
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	temp = *h;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;

	return (newnode);
}

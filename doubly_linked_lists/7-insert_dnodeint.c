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
	
	if (*h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	temp = *h;

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}

	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;

	return (newnode);
}

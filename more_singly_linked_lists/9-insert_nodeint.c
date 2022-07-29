#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @n: n value
 * @head: pointer to pointer head
 * @idx: index of the list where the new node should be added
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *newnode;

	if (*head == NULL || head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *head;

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}



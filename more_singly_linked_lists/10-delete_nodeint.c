#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a LL
 * @head: pointer to pointer head
 * @index: position of the node that should be deleted
 * Return: 1 if it succeeded
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *nextnode;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}

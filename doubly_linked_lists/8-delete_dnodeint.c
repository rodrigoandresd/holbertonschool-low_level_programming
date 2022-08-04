#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a DLL
 * @head: pointer to pointer head
 * @index: position of the node that should be deleted
 * Return: 1 if it succeeded
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		if (*head != NULL)
			(*head)->prev = NULL;
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
	temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t LL
 * @head: Pointer to pointer head
 * Return:  the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}

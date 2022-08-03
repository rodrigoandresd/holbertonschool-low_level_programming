#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

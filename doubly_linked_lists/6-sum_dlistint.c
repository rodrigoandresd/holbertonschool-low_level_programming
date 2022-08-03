#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a LL
 * @head: pointer to head
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

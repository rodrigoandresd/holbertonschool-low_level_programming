#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to head
 * @index: index of the node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	if (index == 0)
		return (temp);
	while (i <= index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}

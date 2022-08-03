#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a dll
 * @head: pointer to pointer head
 * @n: number imput
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

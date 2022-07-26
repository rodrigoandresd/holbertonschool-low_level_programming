#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: element in head
 * @str: string of de name
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	free(new);
	return (*head);
}

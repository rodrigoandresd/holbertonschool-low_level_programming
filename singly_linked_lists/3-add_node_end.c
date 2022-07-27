#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list
 * @head: element in head
 * @str: string of de name
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		new = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = temp;
	}
	return (temp);
}

#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list
 * @head: element in head
 * @str: string of de name
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}

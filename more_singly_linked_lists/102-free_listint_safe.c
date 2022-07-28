#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to pointer to free
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;  /* create temp  pointer of the struct listint */
	size_t len = 0;

	if (h == NULL || *h == NULL) /* conditional In case NULL return */ 
		return (0);
	while (*h != NULL) /*inicia recorrido por el loop mientras head tenga algun valor*/
	{
		temp = *h; /* we save the value of head in a temporal variable*/
		*h = (*h)->next; /* we save the value of the next node in *head */
		free(temp);
		len++;/* we*/
	}
	*h = NULL; /* The function sets the head to NULL */

	Return (len);
}

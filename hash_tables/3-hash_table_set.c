#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *temp, *newnode;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}

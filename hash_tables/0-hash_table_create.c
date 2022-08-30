#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_node_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table->array);
		return (NULL);
	new_hash_table->size = size;
	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	return (new_hash_table);
}

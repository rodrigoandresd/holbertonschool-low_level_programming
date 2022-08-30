#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table you want to you want to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, separator = 0;
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (separator != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			separator = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}

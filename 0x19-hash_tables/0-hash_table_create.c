#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Returns: a pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;

	array = malloc(table->size * sizeof(hash_node_t *));
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = array;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

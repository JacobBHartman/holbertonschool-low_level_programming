#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value the value associated with the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp, *new_node;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	/* create the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		if (new_node->value != NULL)
			free(new_node->value);
		if (new_node->key != NULL)
			free(new_node->key);
		free(new_node);
		return (0);
	}

	if ((ht->array)[i] == NULL)
	{
		ht->array[i] = new_node;
		new_node->next = NULL;
	}
	else
	{
		temp = ht->array[i];
		ht->array[i] = new_node;
		new_node->next = temp;
	}
	return (1);
}
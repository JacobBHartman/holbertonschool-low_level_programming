#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value the value associated with the key
 * Return: 1 on success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp, *new_node;

	if (!ht || !key || !value || strlen(key) == 0 || !ht->array)
		return (0);

	/* create the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* check to see if key already exists */
	for (temp = ht->array[i]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new_node);
			return (1);
		}
	}

	new_node->key = strdup(key);
/*	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
		}*/
	new_node->value = strdup(value);
/*	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
		}*/

	/* add node at the beginning */
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}

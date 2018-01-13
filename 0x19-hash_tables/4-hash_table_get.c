#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key im looking for
 * Return: the value associated with the key, NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !key || !ht->array || strlen(key) == 0)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	for (temp = ht->array[i]; temp != NULL; temp = temp->next)
                if (strcmp(temp->key, key) == 0)
			return (temp->value);
	return (NULL);
}

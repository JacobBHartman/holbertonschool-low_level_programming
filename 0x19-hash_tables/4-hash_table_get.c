#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: key im looking for
 * Return: the value associated with the key, NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
		return (NULL);
	return(ht->array[i]->value);
}

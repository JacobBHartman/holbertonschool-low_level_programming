#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
        hash_node_t *pail, *temp;

        if (ht != NULL && ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			pail = (ht->array)[i];
			while (pail != NULL)
			{
                                temp = pail->next;
				free(pail->key);
				free(pail->value);
				free(pail);
				pail = temp;
                        }
                }
		free(ht->array);
		free(ht);
        }
}

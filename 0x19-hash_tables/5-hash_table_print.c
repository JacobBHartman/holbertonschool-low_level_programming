#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Returns: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *pail = NULL;

	if (ht == NULL || ht->size == 0)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		pail = ht->array[i];
		while (pail != NULL)
		{
			if (flag == 0)
			{
				printf("'%s': ", pail->key);
				printf("'%s'", pail->value);
				flag = 1;
			}
			else
			{
				printf(", '%s': ", pail->key);
				printf("'%s'", pail->value);
			}
			if (pail->next == NULL)
				break;
			pail = pail->next;
		}
	}
	putchar('}');
	putchar('\n');
}

#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: a pointer to a list_t of constant values
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int num_nod; /* number of nodes */

	num_nod = 0;
	while (h !=  NULL)
	{
		num_nod++;
		h = h->next;
	}

	return (num_nod);
}

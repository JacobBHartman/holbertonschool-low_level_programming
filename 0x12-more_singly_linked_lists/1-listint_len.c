#include "lists.h"

/**
 * listint_len - returns the number of elemtns
 * @h: the head pointer
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nod; /* number of nodes */

	num_nod = 0;
	while (h != NULL)
	{
		num_nod++;
		h = h->next;
	}

	return (num_nod);
}

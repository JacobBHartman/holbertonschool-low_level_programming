#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the head pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
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

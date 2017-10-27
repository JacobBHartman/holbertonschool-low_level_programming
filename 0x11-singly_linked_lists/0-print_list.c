#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to a list_t of constant values
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_nod; /* number of nodes */

	num_nod = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] %s\n", "(nil)");
		num_nod++;
		h = h->next;
	}

	return (num_nod);
}

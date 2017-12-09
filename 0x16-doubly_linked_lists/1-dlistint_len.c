#include "lists.h"

/**
 * dlistint_len - prints # of elements of a doubly-linked list
 * @h: a header pointer to a list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t number_nodes = 0;

	while (current != NULL)
	{
		number_nodes++;
		current = current->next;
	}
	return (number_nodes);
}

#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly-linked list
 * @h: a header pointer to a list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *) h;
	size_t number_nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		number_nodes++;
		current = current->next;
	}
	return (number_nodes);
}

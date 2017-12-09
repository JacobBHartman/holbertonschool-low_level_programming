#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: a pointer to a doubly linked list
 * @index: the index
 *
 * Return: data of the nth node, NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (counter < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		counter++;
	}

	return (temp);
}

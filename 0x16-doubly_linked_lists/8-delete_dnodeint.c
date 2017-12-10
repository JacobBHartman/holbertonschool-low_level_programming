#include "lists.h"

/**
 * delete_dnoteint_at_index - deletes the node at index of a linked list
 * @head: a pointer to a pointer to a linked list
 * @index: the index at which the node ought to be deleted
 * Return: 1 if successful, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traverse = *head;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (-1);

	if (*head != NULL && (*head)->next == NULL && index == 0)
	{
		*head = NULL;
		free(traverse);
		return (1);
	}

	for (counter = 0; counter < index; counter++)
	{
		if (traverse == NULL)
			return (-1);
		if (traverse->next == NULL)
		{
			traverse->prev->next = traverse->next;
			free(traverse);
			return (1);
		}
		traverse = traverse->next;
	}

	traverse->next->prev = traverse->prev;
	if (index > 0)
		traverse->prev->next = traverse->next;
	else
		*head = traverse->next;
	free(traverse);
	return (1);
}

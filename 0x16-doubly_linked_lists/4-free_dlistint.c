#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to a doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	return;
}

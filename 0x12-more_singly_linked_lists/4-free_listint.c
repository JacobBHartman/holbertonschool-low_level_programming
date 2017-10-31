#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head pointer of a linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for ( ; head != NULL; )
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

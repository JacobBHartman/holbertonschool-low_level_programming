#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head pointer of a linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	for ( ; head != NULL; )
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

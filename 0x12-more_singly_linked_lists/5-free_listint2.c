#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the head pointer of a linked list, ie a ptr to a ptr to a listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		;
	else
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
		free(*head);
	}
}

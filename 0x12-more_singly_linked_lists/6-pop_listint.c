#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its data
 * @head: a pointer to a pointer to the head node
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int storage;

	t = *head;
	*head = t->next;
	storage = t->n;
	free(t);
	return (storage);
}

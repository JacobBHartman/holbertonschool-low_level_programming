#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: the head pointer (ie points to the beginning of a list
 * @n: data held by the node we are adding
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare variables */
	listint_t *node;
	listint_t *temp;

	/* allocate memory for a new node */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	/* assign values to new node */
	node->n = n;
	node->next = NULL;

	/* check if NULL was passed to head */
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	/* loop through list to find previously-last element */
	temp = *head;
	for ( ; temp->next != NULL; )
		temp = temp->next;
	temp->next = node;

	/* exit stage right */
	return (node);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a linked list
 * @head: a pointer to a pointer to a list_t
 * @n: the data held by the 2-part node
 *
 * Return: the address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare variables */
	listint_t *new;

	/* check if head == NULL */
	if (head == NULL)
		return (NULL);

	/* allocate memory to temp */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/* assign values to new node */
	new->n = n;
	new->next = *head;

	/* the value held by head (an address) is now temp */
	*head = new;
	return (new);
}

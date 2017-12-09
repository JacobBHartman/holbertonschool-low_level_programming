#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 * @head: a pointer to a pointer to a node
 * @n: the data held by the new node
 *
 * Return: the address of the new element, NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn_ptr;

	if (head == NULL)
		return (NULL);

	/* allocate memory for new node */
	nn_ptr = malloc(sizeof(dlistint_t));
	if (nn_ptr == NULL)
		return (NULL);

	nn_ptr->n = n;
	nn_ptr->prev = NULL;
	nn_ptr->next = *head;
	*head = nn_ptr;

	return (*head);
}

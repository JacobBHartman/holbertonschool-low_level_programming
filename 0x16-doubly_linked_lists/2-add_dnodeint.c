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
	dlistint_t *temp = *head;

	if (head == NULL)
		retuurn (NULL);

	/* allocate memory for new node */
	nn_ptr = malloc(sizeof(dlistint_t));
	if (nn_ptr == NULL)
		return (NULL);

	nn_ptr->n = n;
	if (*head == NULL)
	{
		nn_ptr->prev = *head;
		nn_ptr->next = NULL;
		*head = nn_ptr;
	}
	else
	{
		*head = nn_ptr;
		nn_ptr->next = temp;
		temp->prev = nn_ptr;
		nn_ptr->prev = *head;
	}
	return (*head);
}

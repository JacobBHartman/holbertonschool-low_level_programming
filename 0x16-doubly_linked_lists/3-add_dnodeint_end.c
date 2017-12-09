#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: a pointer to a pointer to a doubly linked list
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn_ptr;
	dlistint_t *temp = *head;

	if (head == NULL)
		return (NULL);

	nn_ptr = malloc(sizeof(dlistint_t));
	if (nn_ptr == NULL)
		return (NULL);
	nn_ptr->n = n;
	nn_ptr->next = NULL;

	if (temp == NULL)
		*head = nn_ptr;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nn_ptr;
		nn_ptr->prev = temp;
	}
	return (nn_ptr);
}

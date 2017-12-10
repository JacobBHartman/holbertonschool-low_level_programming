#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a pointer to a doubly linked list
 * @idx: the index of the list where the node ought be added
 * @n: data of the new node
 * Return: the address of the new node, NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode_ptr;
	dlistint_t *traverse = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	newnode_ptr = malloc(sizeof(dlistint_t *));
	if (newnode_ptr == NULL)
		return (NULL);
	newnode_ptr->n = n;
	newnode_ptr->prev = NULL;
	newnode_ptr->next = NULL;

	if (*h == NULL)
	{
		*h = newnode_ptr;
		return (newnode_ptr);
	}

	for (i = 0; i < idx; i++)
	{
		if (traverse == NULL)
			return (NULL);
		if (traverse->next == NULL && i == idx - 1)
		{
			traverse->next = newnode_ptr;
			newnode_ptr->prev = traverse;
			return (newnode_ptr);
		}
		traverse = traverse->next;
	}
	if (idx != 0)
		traverse->prev->next = newnode_ptr;
	else
		*h = newnode_ptr;
	newnode_ptr->next = traverse;
	newnode_ptr->prev = traverse->prev;
	traverse->prev = newnode_ptr;
	return (newnode_ptr);
}

/* see what happens if we get rid of NULL statements after mallocking */

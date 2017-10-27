#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to a list_t
 * @str: the string that is the data in our node(s)
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* declare variables */
	list_t *nd;
	list_t *temp;

	/* allocate memory to a new node */
	nd = malloc(sizeof(list_t));

	/* assign values to new node */
	nd->len = strlen(str);
	nd->str = strdup(str);
	nd->next = NULL;

	/* check if NULL was passed */
	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}

	/* loop through list to find previously-last element */
	temp = *head;
	for ( ; temp->next != NULL; )
		temp = temp->next;
	temp->next = nd;

	return (nd);
}

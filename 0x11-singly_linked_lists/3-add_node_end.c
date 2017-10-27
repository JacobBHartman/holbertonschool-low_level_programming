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
	list_t *temp;

	/* check if NULL was passed */
	if (head == NULL)
		return (NULL);

	/* allocate memory to temp */
	temp = malloc(sizeof(*temp));

	/* assign values to new node */
	temp->len = strlen(str);
	temp->str = strdup(str);
	temp->next = NULL;

	/* point head to new */
	*head = temp

	return (&temp);
}

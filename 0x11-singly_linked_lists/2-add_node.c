#include "lists.h"

/**
 * add_node - adds a new node at the beggining of a linked list
 * @head: a pointer to a pointer to a list_t
 * @str: a pointer to an array of chars of constant value
 *
 * Return: the address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/* declare variables */
	list_t *temp;

	/* check if head == NULL */
	if (head == NULL)
		return (NULL);

	/* allocate memory to temp */
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	/* assign values to new node */
	temp->len = strlen(str);
	temp->str = strdup(str);
	temp->next = *head;

	/* the value held by head (an address) is now temp */
	*head = temp;
	return (temp);
}

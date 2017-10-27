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
	int i;
	char *str_dup;
	list_t *temp;

	/* check if head == NULL */
	if (head == NULL)
		return (NULL);

	/* allocate memory to temp */
	temp = malloc(sizeof(list_t));

	/* strdup and strlen equivalent */
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	str_dup = malloc(i * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
		str_dup[i] = str[i];
	str_dup[i] = str[i];

	/* assign values to new node */
	temp->len = i;
	temp->str = str_dup;
	temp->next = *head;

	*head = temp;
	return (*head);
}

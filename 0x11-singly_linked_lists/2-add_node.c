#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node - adds a new node at the beggining of a linked list
 * @head: a pointer to a pointer to a list_t
 * @str: a pointer to an array of chars of constant value
 *
 * Return: the address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *str_dup;
	int i;
	list_t *nu_head;

	temp = malloc(sizeof(list_t));

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	str_dup = malloc(i * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
		str_dup[i] = str[i];
	str_dup[i] = str[i];

	temp->str = str_dup;
	temp->len = i;
	temp->next = NULL;

	if (head != NULL)
		temp->next = *head;
	nu_head = temp;
	return (nu_head);
}

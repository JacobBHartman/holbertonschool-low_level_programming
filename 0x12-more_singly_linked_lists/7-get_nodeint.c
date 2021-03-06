#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head node
 * @index: index of the node, starting at 0
 *
 * Return: the nth node, NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declare variables */
	listint_t *temp;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	for ( ; i <= index; )
	{
		temp = head;
		if (temp == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (temp);
}

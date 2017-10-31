#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to a head node
 * @idx: the index of the list where the new node should be added (start at 0)
 * @n: data of the new node node
 *
 * Return: address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declare variables */
	listint_t *temp;
	listint_t *tempdos;
	listint_t *bgnnng;
	unsigned int i;

	/* check if NULL was passed to head */
	if (head == NULL)
		return (NULL);

	/* keep a record of the beginning */
	bgnnng = *head;

	/* go through the list and stop at index */
	i = 0;
	while (i < idx)
	{
		temp = *head;
		if (temp == NULL)
			return (NULL);
		*head = temp->next;
		i++;
	}

	tempdos = malloc(sizeof(listint_t));
	tempdos->n = n;
	tempdos->next = temp->next;
	temp->next = tempdos;
	*head = bgnnng;

	return (temp->next);
}

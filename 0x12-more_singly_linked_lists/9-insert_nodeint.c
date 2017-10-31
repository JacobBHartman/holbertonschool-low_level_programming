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
	listint_t *temp, *newnode;
	unsigned int i = 1;
	/* check if NULL was passed to head */
	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t)); /* allocate memory for new node */
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL && idx == 0) /* check if list is empty */
	{
		*head = newnode;
		return (*head);
	}
	if (idx == 0) /* check if node is inserted at index 0 */
	{
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
	/* go through the list and stop at index */
	temp = *head;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	/* check if node is instered at end */
	if (temp->next == NULL && i == idx)
	{
		temp->next = newnode;
		return (temp->next);
	}
	else if (temp->next == NULL && i < idx)
		return (NULL);
	/* we reached the right index, now insert node */
	newnode->next = temp->next;
	temp->next = newnode;
	/* return */
	return (temp->next);
}

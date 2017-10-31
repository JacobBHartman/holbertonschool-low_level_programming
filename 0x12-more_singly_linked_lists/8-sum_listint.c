#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: a pointer to the head node
 *
 * Return: the sum of all the data in the lists
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		sum += temp->n;
	}
	return (sum);

}

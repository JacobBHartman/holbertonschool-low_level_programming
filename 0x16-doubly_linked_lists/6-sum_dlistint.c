#include "lists.h"

/**
 * sum_dlistint - sums a doubly linked list
 * @head: a pointer to a list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

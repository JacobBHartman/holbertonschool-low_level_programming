#ifndef _LISTS_H_
#define _LISTS_H_

/* directives and libraries */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* structure definitions */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: prints to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h);

#endif /* _LISTS_H_ */

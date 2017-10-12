#include "holberton.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated in bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* declare variables */
	char *p;

	/* allocate memory and check for failure */
	p = malloc(b);
	if (p == NULL)
		return (98);

	/* return value */
	return (p);
}

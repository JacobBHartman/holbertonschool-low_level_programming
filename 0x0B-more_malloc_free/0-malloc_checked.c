#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated in bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* declare variables */
	void *p;

	/* allocate memory and check for failure */
	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	/* return value */
	return (p);
}

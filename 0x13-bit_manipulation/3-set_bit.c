#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number composed of bits
 * @index: the index
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	m = 1 << index;

	*n |= m;

	return (1);
}

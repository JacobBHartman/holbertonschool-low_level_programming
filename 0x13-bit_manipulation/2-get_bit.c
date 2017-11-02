#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number composed of bits
 * @index: the index
 *
 * Return: the value of the bit at index, -1 if err
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int limit;
	unsigned int i;

	if (index >= 64)
		return (-1);

	limit = 1;
	for (i = 1; i < index; i++)
		limit <<= 1;
	if (limit > n)
		return (-1);

	while (index)
	{
		n >>= 1;
		index--;
	}
	return (n & 1);
}

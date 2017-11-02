#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip from # to #
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b, c;
	unsigned int count;

	count = 0;
	while (n | m)
	{
		a = b = 1;
		a &= n;
		b &= m;
		c = a ^ b;
		if (c == 1)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}

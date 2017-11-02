#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int i;
	unsigned int number;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	number = 0;
	length = strlen(b);
	for (i = length; i > 0; i--)
		number += ((1 << (length - i)) * (b[i - 1] - '0'));
	return (number);
}

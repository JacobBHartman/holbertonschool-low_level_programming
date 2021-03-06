#include "holberton.h"

/**
 * _memset - fills first n bytes of memory with constant byte b
 * @s: points to a particular area of memory
 * @b: constant byte
 * @n: number of bytes of memory to be filled
 *
 * Return: a pointer to a char aka memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

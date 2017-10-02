#include "holberton.h"

/**
 * _memcpy - copies a memory area to another
 * @dest: memory copied from
 * @src: memory copied to
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest, itself a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

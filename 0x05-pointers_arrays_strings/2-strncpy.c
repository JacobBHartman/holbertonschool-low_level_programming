#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: copied string
 * @src: string we copying
 * @n: limit of number of elements we printing
 * Return: pointer to a character array that is our copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

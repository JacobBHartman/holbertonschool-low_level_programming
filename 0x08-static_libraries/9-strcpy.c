#include "holberton.h"

/**
 * *_strcpy - copies string and prints it
 * @dest: points to the buffer
 * @src: points to a string that we need to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

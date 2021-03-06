#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: points to a char array and our final concatenated string
 * @src: second string concatenated to the end of the first
 * @n: limit of bytes that can be used from src
 * Return: points to the address of a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

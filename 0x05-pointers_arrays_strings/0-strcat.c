#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: points to a char array and our final concatenated string
 * @src: second string concatenated to the end of the first
 * Return: points to the address of a string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	dest[i] = src[j];
	for (j = 1; src[j - 1] != '\0'; j++)
		dest[i + j] = src[j];
	return (dest);
}

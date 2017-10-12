#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first and destination string
 * @s2: second string
 * @n: spaces taken from s2
 *
 * Return: NULL if fails, a new string is success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declare variables */
	unsigned int i, j;
	char *s;

	/* find string(s) length */
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;

	/* allocate memory */
	s = malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	/* concatenate */
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	/* return string */
	return (s);
}

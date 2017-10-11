#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a char ie a string (the two concatenated strings)
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s3;
	int k;
	int l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	s3 = malloc((i + j) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	for (l = 0; l < j; l++)
		s3[k + l] = s2[l];
	return (s3);
}

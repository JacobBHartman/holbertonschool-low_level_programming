#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - points to a newly allocated memoryspace which has a given string
 * @str: the string
 *
 * Return: a pointer to a char ie a string or array
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	/* check if str is NULL */
	if (str == NULL)
		return (NULL);
	/* get size of str */
	for (i = 0; str[i] != '\0'; i++)
		;
	/* allocate memory for new string s */
	s = malloc(i * sizeof(char));
	/* if malloc erred, return NULL */
	if (s == NULL)
		return (NULL);
	/* copy str to s */
	for (i = 0; str[i] != '\0'; i++)
		*(s + i) = *(str + i);
	*(s + i) = *(str + i);
	/* return son! */
	return (s);

}

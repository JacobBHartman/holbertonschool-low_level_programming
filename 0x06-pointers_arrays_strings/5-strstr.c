#include "holberton.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer to the first byte in haystack where needle starts
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	char *mark;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		mark = &haystack[i];
		for (j = 0; needle[j] == haystack[i] && needle[j] != '\0'; j++)
		{
			i++;
		}
		if (needle[j] == '\0')
			return (mark);
	}
	return (NULL);
}

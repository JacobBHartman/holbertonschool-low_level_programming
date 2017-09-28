#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters to upper
 * @s: char array that we are upping the case of
 *
 * Return: pointer to a char that is the string to be changed
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

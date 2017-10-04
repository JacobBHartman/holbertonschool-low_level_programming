#include "holberton.h"

int pali_help(char *s, int length, int iteration)
{
	if (*(s + iteration) == *(s + length - (1 + iteration)))
	{
		if (iteration * 2 >= length)
			return (1);
		return (pali_help(s, length, ++i));
	}
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (_strlen(s) < 2)
		return (1);
	return (pali_help(s, _strlen(s), 0));
}

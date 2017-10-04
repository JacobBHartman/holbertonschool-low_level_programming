#include "holberton.h"

/**
 * _strlen_recursive - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of the string
 */
int _strlen_recursive(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursive(++s) + 1);
}

/**
 * pali_help - iterates over string for matching letters in palindrome
 * @s: the string
 * @length: the string length
 * @iteration: self-evident
 *
 * Return: 1 if palidnrome, 0 if not
 */
int pali_help(char *s, int length, int iteration)
{
	if (*(s + iteration) == *(s + length - (1 + iteration)))
	{
		if (length - 1 - (2 * iteration) < 2)
			return (1);
		return (pali_help(s, length, ++iteration));
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
	int length;

	length = _strlen_recursive(s);
	if (length < 2)
		return (1);
	return (pali_help(s, length, 0));
}

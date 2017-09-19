#include "holberton.h"

/**
 * _isalpha - determines if value represents an alphabetic character
 * @c: checked against ascii values
 *
 * Return: 1 if value is alphabetic. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

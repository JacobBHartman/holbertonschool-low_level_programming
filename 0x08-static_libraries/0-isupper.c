#include "holberton.h"
/**
 * _isupper - checks if char is uppercase character
 * @c: the variable that is to be checked for case
 * Return: if uppercase return 1; otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

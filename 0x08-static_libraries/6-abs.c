#include "holberton.h"

/**
 * _abs - prints the absolute value
 * @n: made into an absolute value
 *
 * Return: integer value of the absoluted number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}

#include "holberton.h"

/**
 * puts2 - puts one out of every two chars
 * @str: string to be analyzed
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

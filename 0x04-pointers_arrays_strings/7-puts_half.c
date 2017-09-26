#include "holberton.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be analyzed and printed from
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int j;
	int haflngth;

	length = 0;
	while (str[length])
		length++;
	if (length % 2 == 0)
	{
		haflngth = length / 2;
		for (j = haflngth; j < length; j++)
			_putchar(str[j]);
	}
	else
	{
		haflngth = (length - 1) / 2;
		for (j = haflngth + 1; j < length; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet 10 tye
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar('a' + i);
		}
		_putchar('\n');
	}

}

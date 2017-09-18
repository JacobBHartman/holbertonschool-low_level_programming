#include "holberton.h"

/**
 * main - Print alphabet
 *
 * Return: Always 0.
 */
int main(void)
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
	return (0);
}

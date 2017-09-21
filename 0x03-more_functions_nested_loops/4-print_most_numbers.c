#include "holberton.h"
/**
 * print_most_numbers - prints integers 0 thru 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			;
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}

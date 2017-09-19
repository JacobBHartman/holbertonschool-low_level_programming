#include "holberton.h"

/**
 * print_times_table - prints any times table
 * @n: the width and length of the times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k, x, y, result;

	if (n >= 15 || n <= 0)
		;
	else
	{
	for (y = 0; y < n + 1; y++)
	{
		for (x = 0; x < n + 1; x++)
		{
			result = x * y;
			i = result / 100;
			j = result / 10 % 10;
			k = result % 10;
			if (result < 10 && x != 0) /* print before number */
				_putchar(' ');
			if (result < 100 && x != 0)
				_putchar(' ');
			if (result > 99) /* print number */
			{
				_putchar('0' + i);
				_putchar('0' + j);
				_putchar('0' + k);
			}
			else if (result < 100 && result > 9)
			{
				_putchar('0' + j);
				_putchar('0' + k);
			}
			else
				_putchar('0' + result);
			if (x == n) /* print after number */
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
	} } } }
}

#include "holberton.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;
	int result;
	int i;
	int j;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			result = x * y;
			i = result / 10;
			j = result % 10;
			if (x == 0) /* print before number */
				; /* do nothing */
			else if (result > 9)
				; /* do nothing */
			else if (result < 10)
				_putchar(' ');
			else
			{
				; /* error */
			}
			if (result > 9) /* print number */
			{
				_putchar('0' + i);
				_putchar('0' + j);
			}
			else
				_putchar('0' + result);
			if (x == 9) /* print after number */
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

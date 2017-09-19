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
			if (x == 9)
			{
				_putchar('0' + i);
				_putchar('0' + j);
				_putchar('\n');
			}
		       	else if (x == 0)
			{
				_putchar('0' + result);
			}
			else if (result > 9)
			{
				_putchar('0' + i);
				_putchar('0' + j);
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
		        else if
			if (result <= 9 && x == 0 && x != 9)
			{
				_putchar('0' + result);
			}
			else if (result <= 9 && x != 0 && x != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result <= 9 && x == 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
				_putchar('\n');
			}
			else if (result >= 10 && x != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + i);
				_putchar('0' + j);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + i);
				_putchar('0' + j);
				_putchar('\n');
			}
		}
	}
}

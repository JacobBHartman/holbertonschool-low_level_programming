#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					if (i >= k && j >= l)
						;
					else if ((10 * i + j) > (10 * k + l))
						;
					else
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
					if (i < 9 || j < 8 || k < 9 || l < 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

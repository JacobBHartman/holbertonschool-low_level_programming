#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i == j || i == k || j == k)
					;/* do nothing */
				else if (i > j || j > k)
					;/* do nothing */
				else
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i < 7 || j < 8 || k < 9)
					{
						putchar(',');
						putchar(' ');
					}
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

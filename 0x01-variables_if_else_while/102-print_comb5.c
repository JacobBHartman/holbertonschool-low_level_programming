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
	int l;

	i = j = k = l = 0;
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
					if (k < i && l < j)
						; /* don't print */
					else if (i == k && j == l)
						; /* don't print */
					else if ((10 * i + j) > (10 * k + l))
						; /* don't print */
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

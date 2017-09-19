#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - counts to 98 from any numbers
 * @n: number that we count from
 * Return: void
 */
void print_to_98(int n)
{
	int incre;

	if (n < 98)
	{
		incre = 1;
	}
	else if (n > 98)
	{
		incre = -1;
	}
	else
	{
		incre = 0;
	}
	while (n != 98)
	{
		printf("%i, ", n);
		n += incre;
	}
	printf("%i\n", n);
}

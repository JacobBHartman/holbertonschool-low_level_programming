#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	unsigned long first;
	unsigned long second;
	unsigned long third;

	n = 0;
	first = 1;
	second = 2;
	printf("%lu, %lu, ", first, second);
	for (n = 0; n < 47; n++)
	{
		third = first + second;
		printf("%lu, ", third);
		first = second;
		second = third;
	}
	printf("%lu\n", first + second);
	return (0);
}

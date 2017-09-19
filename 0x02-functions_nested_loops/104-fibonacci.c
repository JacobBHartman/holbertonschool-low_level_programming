#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int first;
	int second;
	int third;

	n = 0;
	first = 1;
	second = 2;
	printf("%d, %d, ", first, second);
	for (n = 0; n < 98; n++)
	{
		third = first + second;
		printf("%d, ", third);
		first = second;
		second = third;
	}
	printf("%d\n", first + second);
	return (0);
}

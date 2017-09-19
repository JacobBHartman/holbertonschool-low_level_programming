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
	int first;
	int second;
	int third;
	int sum;

	first = 1;
	second = 2;
	sum = 2;

	while (second < 4000000)
	{
		third = first + second;
		if (third % 2 == 0)
		{
			sum += third;
		}
		first = second;
		second = third;
	}
	printf("%d\n", sum);
	return (0);
}

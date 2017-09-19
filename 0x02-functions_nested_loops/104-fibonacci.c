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
	unsigned long n, first, second, third, firstA, firstB, secA, secB;
	unsigned long thirdA, thirdB, carry;

	n = 0; first = 1; second = 2;
	printf("%lu, %lu, ", first, second);
	for (n = 0; n < 90; n++)
	{
		third = first + second;
		printf("%lu, ", third);
		first = second; second = third;
	}
	firstA = first / 1000000000000; firstB = first % 1000000000000;
	secA = second / 1000000000000; secB = second % 1000000000000;
	for (n = 0; n < 5; n++)
	{
		thirdB = firstB + secB;
		if (thirdB > 999999999999)
		{
			carry = thirdB / 1000000000000;
			thirdB %= 1000000000000; thirdA = firstA + secA + carry;
		}
		else
		{
			thirdA = firstA + secA;
		}
		printf("%lu%lu, ", thirdA, thirdB);
		firstA = secA; firstB = secB; secA = thirdA; secB = thirdB;
	}
	thirdB = firstB + secB;
	if (thirdB > 999999999999)
	{
		carry = thirdB / 1000000000000;
		thirdB %= 1000000000000; thirdA = firstA + secA + carry;
	}
	else
	{
		thirdA = firstA + secA;
	}
	printf("%lu%lu\n", thirdA, thirdB);
	return (0);
}

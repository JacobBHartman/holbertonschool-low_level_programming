#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - find prime numbers
 *
 * Return: Always zero
 */
int main(void)
{
	unsigned long guess;
	unsigned long starting; /* primary number */
	unsigned long lprime; /* largest prime found so far */
	unsigned long current; /* largest current factor */

	guess = 2;
	starting = 612852475143;
	lprime = 0;
	current = starting;
	for (guess = 2; guess <= current; guess++)
	{
		while (current % guess == 0)
		{
			current /= guess;
			if (guess > lprime)
			{
				lprime = guess;
			}
		}
	}
	printf("%lu\n", lprime);
	return (0);
}

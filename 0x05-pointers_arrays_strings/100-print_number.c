#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int magnitude;
	unsigned int nu;

	magnitude = 1;
	if (n < 0)
	{
		_putchar('-');
		nu = n * -1;
	}
	else
	{
		nu = n * 1;
	}
	while (nu / magnitude >= 10)
	{
		magnitude *= 10;
	}
	while (magnitude > 0)
	{
		_putchar('0' + (nu / magnitude));
		nu %= magnitude;
		magnitude /= 10;
	}
}

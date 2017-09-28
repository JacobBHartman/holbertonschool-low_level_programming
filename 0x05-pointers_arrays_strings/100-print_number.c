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

	magnitude = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / magnitude >= 10)
	{
		magnitude *= 10;
	}
	while (magnitude > 0)
	{
		_putchar('0' + (n / magnitude));
		n %= magnitude;
		magnitude /= 10;
	}
}

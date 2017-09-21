#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int digit;
	int modulo;

	modulo = 10;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (modulo * 10 < n)
	{
		modulo *= 10;
	}
	while (modulo > 0)
	{
		digit = n / modulo;
		n -= modulo * digit;
		modulo /= 10;
		_putchar('0' + digit);
	}
}

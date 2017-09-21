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

	digit = 1;
	modulo = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (modulo * 10 <= n)
	{
		modulo *= 10;
	}
	while (modulo > 1)
	{
		digit = n / modulo;
		n -= digit * modulo;
		_putchar('0' + digit);
		modulo /= 10;
	}
	_putchar('0' + n);
}

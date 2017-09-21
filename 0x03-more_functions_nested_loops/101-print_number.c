#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int digit;
	int magnitude;

	digit = 1;
	magnitude = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n >= magnitude * 10)
		{
			magnitude *= 10;
		}
		while (magnitude > 1)
		{
			digit = n / magnitude;
			n -= digit * magnitude;
			_putchar('0' + digit);
			magnitude /= 10;
		}
		_putchar('0' + n);
	}
}

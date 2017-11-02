#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if ((n & 1) && (n > 0))
	{
		n >>= 1;
		print_binary(n);
		_putchar('1');
	}
	else if (n > 0)
	{

		n >>= 1;
		print_binary(n);
		_putchar('0');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}

#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is taken from
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar('0' + last);
	return (last);
}

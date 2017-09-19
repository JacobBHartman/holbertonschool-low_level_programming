#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours;
	int mins;
	int h10, h1;
	int m10, m1;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			h10 = hours / 10;
			h1 = hours % 10;
			m10 = mins / 10;
			m1 = mins % 10;
			_putchar('0' + h10);
			_putchar('0' + h1);
			_putchar(':');
			_putchar('0' + m10);
			_putchar('0' + m1);
			_putchar('\n');
		}
	}
}

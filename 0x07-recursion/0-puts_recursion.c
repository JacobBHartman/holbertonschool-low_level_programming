#include "holberton.h"

/**
 * _puts_recursion - prints a strings
 * @s: pointer to a char
 *
 * Return: void
 **/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_puts_recursion(s + 1);
}

#include "holberton.h"

/**
 * swap_int - swap the value of the two integers
 * @a: first integer to be swapped
 * @b: secnd integer to be swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

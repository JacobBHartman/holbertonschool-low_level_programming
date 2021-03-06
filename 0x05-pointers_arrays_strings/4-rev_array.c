#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of ints
 * @a: an array
 * @n: numberr of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals in a given square matrix
 * @a: the square matrix
 * @size: matrix size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < size * size; i += size + 1)
		sum += *(a + i);
	printf("%d, ", sum);
	sum = 0;
	for (i = size - 1; i < size * size - 1; i += size - 1)
		sum += *(a + i);
	printf("%d\n", sum);
}

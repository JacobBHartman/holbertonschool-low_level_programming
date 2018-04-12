#include "search_algos.h"

/**
 * binary_search - search for a value in an array of integers using
 *                 a binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, j;
	size_t lo = 0;
	size_t hi = size - 1;

	if (array == NULL)
		return (-1);

	while (lo <= hi)
	{
		mid = (hi + lo) / 2;

		printf("Searching in array: ");
		for (j = lo; j < hi; j++)
			printf("%i, ", array[j]);
		printf("%i\n", array[j]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			hi = mid - 1;
		else if (array[mid] < value)
			lo = mid + 1;
	}
	return (-1);
}

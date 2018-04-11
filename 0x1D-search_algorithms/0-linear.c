#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int size_int = size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size_int; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

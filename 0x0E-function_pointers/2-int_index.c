#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: contains integers
 * @size: size of the array
 * @cmp: pointer to a function that takes in int and returns int
 *
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-2);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}
	return (-1);
}

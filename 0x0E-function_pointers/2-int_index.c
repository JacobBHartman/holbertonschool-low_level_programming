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
	int val;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		val = cmp(array[i]);
		if (val == 1)
			return (i);
	}
	return (-1);
}

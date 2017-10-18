#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on ea aray elemnt
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to a function that takes in an int and returns void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}

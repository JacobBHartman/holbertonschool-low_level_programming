#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum int
 * @max: the maximum int
 *
 * Return: a pointer to the array. NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((1 + max - min) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		*(p + i) = min;
		min++;
	}
	return (p);
}

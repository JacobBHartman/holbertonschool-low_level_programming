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
	int len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(p + i) = min;
		min++;
	}
	return (p);
}

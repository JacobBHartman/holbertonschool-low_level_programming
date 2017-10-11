#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: of grid
 * @height: of grid
 *
 * Return: a pointer to a to a pointer to a char at the beginning of an array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	/* check if height or width are zero */
	if (height == 0 || width == 0)
		return (NULL);
	/* allocate memory for each row (which are pointers to int arrays) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		*(grid + k) = malloc(width * sizeof(int));
		if (*(grid + k) == NULL)
		{
			while (k >= 0)
			{
				free(*(grid + k));
				k--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(grid + i) + j) = 0;
	}
	return (grid);
}

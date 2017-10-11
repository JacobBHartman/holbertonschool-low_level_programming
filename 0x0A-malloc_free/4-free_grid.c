#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees invalid grid memory
 * @grid: da grid
 * @height: de da grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;
	height -= 1;
	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

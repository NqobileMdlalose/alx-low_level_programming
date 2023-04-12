#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the program grid
 * @grid: pointer
 * @height: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL || height != 0)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}

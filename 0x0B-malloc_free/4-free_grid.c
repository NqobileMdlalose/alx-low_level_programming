#include <stdlib.h>
#include "main.h"

/**
 *
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

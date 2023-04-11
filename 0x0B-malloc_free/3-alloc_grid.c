#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: integer
 * @height: integer
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j--]);
		}
		free(grid);
		return (NULL);
	}
	}
	return (grid);
}


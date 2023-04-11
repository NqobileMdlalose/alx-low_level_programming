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
	int **ptr1;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr1 = malloc(sizeof(int *) * width);
	if (*ptr1 == NULL)
	{
		return (NULL);
		free(ptr1);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(ptr1[j]);
		}
		free(ptr1);
		return (NULL);
	}
	return (ptr1);
}

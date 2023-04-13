#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min range
 * @max: max range
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *arr;
	int s, i;

	if (min > max)
	{
		return (NULL);
	}
	s = (max - min + 1);
	arr = malloc(s * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}


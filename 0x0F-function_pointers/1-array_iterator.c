#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator -  function iterator
 * @array: pointer
 * @size: iterator
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action && array)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}

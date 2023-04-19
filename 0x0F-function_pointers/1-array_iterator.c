#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator -  function iterator
 * @array:
 * @size:
 * @action:
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;
	
	if (action)
	for (j = 0; j < size; j++ )
	{
		action(array[j]);
	}
}

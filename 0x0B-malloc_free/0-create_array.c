#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array and initializes it with a char
 * @size: size of the array
 * @c: the char to be initialized
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;
	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	/*if memory allocation fails*/
	if (*arr == '\0')
	{
		return ('\0');
	}
	return (arr);
}

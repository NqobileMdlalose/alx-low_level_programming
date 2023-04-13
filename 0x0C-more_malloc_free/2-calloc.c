#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *c_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	c_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		c_ptr[i] = 0;
	}
	return (ptr);
}

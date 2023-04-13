#include "main.h"
#include  <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index value
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}
	*n |= (1LU << index);
	return (1);
}

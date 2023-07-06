#include "main.h"

/**
 * clear_bit - sets the valuse of a bit to 0 at a given index
 * @n: string
 * @index: index
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}


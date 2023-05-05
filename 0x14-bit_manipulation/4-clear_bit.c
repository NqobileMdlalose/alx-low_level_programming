#include "main.h"

/**
 * clear_bit - sets the value of a bitto 0 at a given index
 * @n: pointer
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	*n &= ~(1UL << index);
	return (1);
}

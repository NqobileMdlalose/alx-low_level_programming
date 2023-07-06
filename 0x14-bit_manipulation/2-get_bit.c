#include "main.h"

/**
 * get_bit - gets the bit at a given index
 * @n: int
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & mask)
		return (1);
	else
		return (0);

}

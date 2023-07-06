#include "main.h"

/**
 * get_bit - gets the bit at a given index
 * @n: int
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 0;
	unsigned long int temp = n;
	unsigned int mask = 1UL << index;

	while (temp != 0)
	{
		bits++;
		temp = temp >> 1;
	}
	if (index >= bits)
		return (-1);
	if (n & mask)
		return (1);
	else
		return (0);

}

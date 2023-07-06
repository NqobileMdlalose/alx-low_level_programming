#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: string
 * @index: index
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = 0;
	unsigned long int temp;

	temp = *n;
	if (n == NULL)
		return (0);
	while (temp != 0)
	{
		bits++;
		temp = temp >> 1;
	}
	if (index >= bits)
		return (-1);
	*n |= (1UL << index);
	return (1);
}

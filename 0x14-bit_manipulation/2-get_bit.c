#include "main.h"
#include <stddef.h>

/**
 * get_bit - gets the value of a bit at a given index
 * @n: int
 * @index: int
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

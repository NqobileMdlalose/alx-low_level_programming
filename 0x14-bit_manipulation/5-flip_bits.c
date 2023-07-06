#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: integer
 * @m: integer 2
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result != 0)
	{
		if (result & 1)
		{
			count++;
		}
		result >>= 1;
	}
	return (count);
}

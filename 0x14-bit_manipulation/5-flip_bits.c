#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: int
 * @m: int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int num = 0;

	while (diff)
	{
		num++;
		diff &= diff - 1;
	}
	return (num);
}

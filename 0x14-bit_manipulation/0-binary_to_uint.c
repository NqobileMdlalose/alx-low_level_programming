#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: unsigned in
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0')
		{
			num <<= 1;
		}
		else if (*b == '1')
		{
			num <<= 1;
			num |= 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (num);
}

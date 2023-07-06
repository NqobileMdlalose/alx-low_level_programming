#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char byte;

	byte = *((unsigned char *)&num);
	if (byte == 1)
		return (1);
	else
		return (0);
}

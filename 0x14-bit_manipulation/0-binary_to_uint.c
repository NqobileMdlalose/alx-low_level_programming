#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: string containing 1s and 0s
 * Return: unsigned in
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = 0;
	int i;
	int power = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			dec += 1 << power;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		power++;
	}
	return (dec);
}

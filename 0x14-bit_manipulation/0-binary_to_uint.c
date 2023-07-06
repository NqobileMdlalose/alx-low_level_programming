#include "main.h"
#include <stddef.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = 0;
	int i;
	int power = 0;

	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == 0)
		{
			dec += 1 << power;
		}
		power++;
	}
	return (dec);
}

#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints a number in binary
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int k = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (k != 0)
	{
		if (n & k)
		{
			_putchar(49);
			i = 1;
		}
		else if (i)
		{
			_putchar(48);
		}
		k >>= 1;
	}
	if (!i)
	{
		_putchar(48);
	}
}

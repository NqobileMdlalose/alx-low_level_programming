#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, b, bit = 0;
	unsigned long int temp = n;

	while (temp != 0)
	{
		bit++;
		temp = temp >> 1;
	}
	if (bit == 0)
	{
		_putchar(48);
	}
	else
	{
		for (i = bit - 1; i >= 0; i--)
		{
			b = n >> i;
			if (b & 1)
				_putchar(49);
			else
			_putchar(48);
		}
	}
}

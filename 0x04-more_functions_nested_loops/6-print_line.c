#include "main.h"

/**
 * print_line - prints a line
 * @n: number
 * Return void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (n >= i)
		{
		_putchar('_');
		i++;
		}
	_putchar('\n');
	}
}

#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			_putchar(n + '0');
			_putchar('\n');
		}
		else if (i == 2)
		{
			_putchar(n + '0');
			_putchar(n + '0');
			_putchar('\n');
		}
		else if (i == 3)
		{
			_putchar(n + '0');
			_putchar(n + '0');
			_putchar(n + '0');
			_putchar('\n');
		}
		else if (i == 4) 
		{
			_putchar(n + '0');
			_putchar(n + '0');
			_putchar(n + '0');
			_putchar(n + '0');
			_putchar('\n');
		}
	}
}

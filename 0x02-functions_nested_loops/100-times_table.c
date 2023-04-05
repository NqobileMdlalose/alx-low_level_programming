#include "main.h"

/**
 * times_table - pints n times tablestarting from 0
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, mul;

	if (n < 15 || n > 0 )
	{
		for (i = 0; i < n; i++)
		{
			mul = n * i;
			if (i == 0)
			{
				_putchar(mul);
			}
			if (mul < 10 && i != 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul);
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar(mul);
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

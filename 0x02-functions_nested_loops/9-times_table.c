#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int multi;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			multi = i * j;
			if (j == 0)
				_putchar(multi + '0');
			if (multi < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

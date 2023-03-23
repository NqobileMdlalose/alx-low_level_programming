#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}


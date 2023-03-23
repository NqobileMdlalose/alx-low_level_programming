#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 2; i <= j; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

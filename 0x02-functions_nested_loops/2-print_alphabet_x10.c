#include "main.h"

/**
 * print_alphabet_x10 - Prints alpahbet 10 time
 *
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	int i;
	char x;

	i = 0;
	while (i < 10)
	{
		x = 97;
		while (x <= 122)
		{
		_putchar(x);
		x++;
		}
	_putchar('\n');
	i++;
	}
}

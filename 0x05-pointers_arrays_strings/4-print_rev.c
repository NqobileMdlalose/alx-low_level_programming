#include "main.h"

/**
 * print_rev - prints a sting in reverse
 * @s: caractor variable
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(*s);
		}
	}
	_putchar('\n');
}

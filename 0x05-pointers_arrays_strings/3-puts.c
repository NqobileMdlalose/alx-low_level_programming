#include "main.h"

/**
 * _puts - prints a string of charactors
 * @str: pointer variable
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}

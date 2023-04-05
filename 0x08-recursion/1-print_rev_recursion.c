#include "main.h"

/**
 * _print_rev_recursion - prints a sting in reverse
 * @s: pointer to a sting
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\0');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

#include "main.h"

/**
 * rev_string - reverses the string
 * @s: charactor variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	
	for (j = i -1; j <= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

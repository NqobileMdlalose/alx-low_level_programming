#include "main.h"

/**
 * puts2 - prints every other charactor starting from 0
 * @str: charactor variable
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
			str++;
		}
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every second digit
 * @str - charactor variable
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (str[i] = 0; i != '\0'; i++)
	{
		if (i / 2 == 0)
		{
			_putchar(str[i])
		}
	}
}


#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: 0.
 */
void jack_bauer(void)
{
	int i;

	i = '00:00';
	while (i < '23:59')
	{
		_putchar(i);
		i++;
	}
}

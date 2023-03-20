#include "main.h"

/**
 * main - Entry Point
 *
 * Description: Prints the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_last_digit - Entry Point
 * @i: Prints the last digit of a number
 *
 * Return: num
 */
int print_last_digit(int i)
{
	int num;

	num = (i % 10);
	if (i < 0)
	{
		num = (-i * num);
	}
	_putchar(num + '0');
	return (num);
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Description: Prints out single numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		i = putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

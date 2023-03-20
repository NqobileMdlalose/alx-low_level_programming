#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Description: Prints the alphabet in reverser
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char small;

	for (x = 'Z'; x >= 'A'; x--)
	{
	small = tolower(x);
		putchar(small);
	}
	putchar ('\n');
	return (0);
}

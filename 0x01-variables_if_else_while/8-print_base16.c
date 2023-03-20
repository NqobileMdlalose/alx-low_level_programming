#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * Desciption: Prints number of base 16 in lowercase
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int i;
	int x;
	char small;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (x = 'A'; x <= 'F'; x++)
	{
		small = tolower(x);
		putchar(small);
	}
	printf("\n");
	return (0);
}

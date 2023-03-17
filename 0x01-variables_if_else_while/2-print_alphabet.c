#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * Description: Prints alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 'A';
	while (x <= 'Z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}
	printf("%c\n", x);
	return (0);
}

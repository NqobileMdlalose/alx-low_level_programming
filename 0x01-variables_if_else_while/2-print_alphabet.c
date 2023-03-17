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
	
	for (x = 'A'; x <= 'Z'; x++)
	{	
		char small = tolower(x);
		putchar(small);
	}
	printf("\n");
	return (0);
}


#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point 
 *
 * Description: Prints alphabet in lower case execpt for q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char e;
	char q;
	char small;
	
	e = 'e';
	q = 'q';
	for (x = 'A'; x <= 'Z'; x++)
	{
		small = tolower(x);
		if (small != e && small != q)
		putchar(small);
	}
	printf("\n");
	return (0);
}

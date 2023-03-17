#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i++);
	}
	printf("\n");
	return (0);
}

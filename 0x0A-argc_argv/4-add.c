#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds the numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	if (argc < 2)
	{
		printf("0\n");
	}
	return (0);
}

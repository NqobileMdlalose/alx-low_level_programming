#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: int
 */
int main(int argc, char **argv)
{
	int j = 0, n = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (j < n)
	{
		printf("%02hhx", *((char *)main + j));
		j++;
		if (n - 1 > j)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);


}

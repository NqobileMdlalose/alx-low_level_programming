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
	int i, j;

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	for (j = 0; j < i; j++)
	{
		printf("%02hhx ", *((unsigned char *)main + j));
		if (i > j)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);


}

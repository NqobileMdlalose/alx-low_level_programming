#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * @i: integer variable
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

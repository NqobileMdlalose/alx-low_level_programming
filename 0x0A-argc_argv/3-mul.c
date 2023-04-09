#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main- multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 1; 
	unsigned int mul = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = i * atoi(argv[i]);
		}
		printf ("%d\n", mul);
	}
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

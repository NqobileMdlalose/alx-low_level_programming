#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char **argv)
{
	int cent, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	coin = 0;
	coin += cent / 25;
	cent %= 25;
	coin += cent / 10;
	cent %= 10;
	coin += cent / 5;
	cent %= 5;
	coin += cent / 2;
	cent %= 2;
	coin += cent;
	printf("%d\n", coin);
	return (0);
}

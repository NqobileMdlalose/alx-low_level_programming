#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints th diagonals of squares
 * @a: pointer to an array
 * @size: variable
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size) + 1);
	}
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (i * size) + (2 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}

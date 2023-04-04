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
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + 1);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}

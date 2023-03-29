#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @n: integer 1
 * @a: pointer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	char tem;

	for (i = 0; i < n / 2; i++)
	{
		tem = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tem;
	}
}

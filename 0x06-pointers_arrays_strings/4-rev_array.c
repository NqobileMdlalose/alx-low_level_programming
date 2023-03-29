#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @n: integer 1
 * @a: pointer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, n2;
	char tem;

	n2 = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tem = a[i];
		a[i] = a[n2];
		a[n2--] = tem;
	}
}

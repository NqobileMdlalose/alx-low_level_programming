#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @n: integer
 * @a: pointer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	i = 0; 
	while (i < n / 2)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
		i++;
	}
}

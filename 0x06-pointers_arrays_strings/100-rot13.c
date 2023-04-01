#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @a: pointer
 * Return: char
 */
char *rot13(char *a)
{
	char *alpha1 = "abcdefghijklm";
	char *alpha2 = "nopqrstuvwxyz";
	int i;

	while (alpha1[i] != '\0')
	{
		while (a[i] <= 13)
		{
			alpha1[i] = alpha2[i];
			i++;
		}
		i++;
	}
	return (a);
}

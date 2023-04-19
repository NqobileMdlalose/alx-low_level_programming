#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @src: pointer
 * @dest: pointer
 * @n: variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && j < *src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

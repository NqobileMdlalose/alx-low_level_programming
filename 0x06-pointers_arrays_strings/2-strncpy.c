#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

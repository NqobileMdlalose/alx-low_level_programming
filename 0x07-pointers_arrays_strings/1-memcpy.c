#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i = 0;

	while (i != n)
	{
		*p++ = *src++;
		i++;
	}
	return (dest);
}

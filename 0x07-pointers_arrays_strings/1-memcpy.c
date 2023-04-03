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

	while (n--)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

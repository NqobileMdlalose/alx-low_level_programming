#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: pointer variable
 * @b: value to be set
 * @n: number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s1 = s;

	while (n--)
	{
		*s1++ = b;
	}
	return (s);
}

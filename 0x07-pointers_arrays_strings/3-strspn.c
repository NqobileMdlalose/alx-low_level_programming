#include "main.h"

/**
 * _strspn - gets the length of a prefix substing
 * @s: string 1
 * @accept: string 2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;

	while (s[i] && accept[i])
	{
		if (s[i] != accept[i])
		{
			break;
		}
		i++;
	}
	count++;
	return (count);
}

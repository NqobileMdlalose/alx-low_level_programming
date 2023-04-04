#include "main.h"

/**
 * _strspn - gets the length of a prefix substing
 * @s: string 1
 * @accept: string 2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	
	i = 0;
	j= 0;
	while (s[i] != '\0') 
	{
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
			{
				break;
			}
			j++;
		}
		i++;
		count++;
	}
	return (count);
}

#include "main.h"

/**
 * _strcmp - compares 2 stings
 * @s1: sring 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int neg;

	neg = s1[i] - s2[i];
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (neg);
		}
		else if (s1[i] < s2[i])
		{
			return (neg);
		}
		i++;
	}
	return (0);
}

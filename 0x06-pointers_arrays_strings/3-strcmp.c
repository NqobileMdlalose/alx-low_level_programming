#include "main.h"

/**
 * _strcmp - compares 2 stings
 * @s1: sring 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, neg;

	neg = s1[i] - s2[j];
	if (s1[i] > s2[j])
	{
		return (neg);
	}
	else if (s1[i] < s2[j])
	{

		return (neg);
	}
	else
	{
	return (0);
	}
}

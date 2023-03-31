#include "main.h"

/**
 * leet - encodes a string into 1337
 * @p: charactor
 * Return: char
 */
char *leet(char *p)
{
	int i, j;

	char *get = "aAeEoOtTlL";
	char *rep = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == get[j])
			{
				p[i] = rep[j];
			}
		}
	}
	return (p);
}

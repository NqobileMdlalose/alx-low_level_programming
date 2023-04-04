#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;
	
	p1 = haystack;

	if (!haystack || !needle)
	{
		return ('\0');
	}
	if (!*needle)
	{
		return (p1);
	}
	while (*p1)
	{
		p2 = p1;
		p3 = needle;
		while(*p2 && *p3 && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (!*p3)
		{
			return (p1);
		}
		p1++;
	}
	return ('\0');
}

#include "main.h"

/**
 * *_strchr - locates a charactor in a string
 * @s: string pointer
 * @c: charactor variable
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}

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
		if (*s == c || c == '\0')
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

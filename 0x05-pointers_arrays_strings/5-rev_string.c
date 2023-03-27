#include "main.h"

/**
 * rev_string - reverses the string
 * @s: charactor variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, len1, len2;
	char temp;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 - 1;

	for (i = 0; i < len1 / 2; i++)
	{
		temp  = s[i];
		s[i] = s[len2];
		s[len2--] = temp;
	}

}

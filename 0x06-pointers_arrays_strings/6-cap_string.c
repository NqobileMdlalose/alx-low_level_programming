#include "main.h"

/**
 */
char *cap_string(char *t)
{
	int i = 0, j;

	while (t[i] != '\0')
	{
		j = i + 1;
		if (j == ' ' && j == '.')
		{
			while (t[i] >= 97 && t[i] <= 122)
			{
				t[i] = t[i] - 32;
				i++;
			}
		}
		i++;
	}
	return (t);
}
  

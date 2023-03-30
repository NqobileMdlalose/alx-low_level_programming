#include "main.h"

/**
 */
char *cap_string(char *t)
{
	int i = 0;
	int cap = 1;

	while (t[i] != '\0')
	{
		if (cap &&(t[i] >= 'a' && t[i] <= 'z'))
		{
			t[i] -= 'a' - 'A';	
		}
		if (t[i] == ' ' || t[i] == '\t' || t[i] == '\n')
		{
			cap = 1;
		}
		else 
		{
			cap = 0;
		}
		i++;
	}
	return (t);
}
  

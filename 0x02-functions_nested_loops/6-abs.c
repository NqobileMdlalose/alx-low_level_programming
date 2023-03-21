#include "main.h"
#include <stdlib.h>

/**
 * _abs - Entry Point
 *
 * @i: computes the absolute value
 * Return: Always 0. (Success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
		return (i);
	}
	else
	{
		return (i);
	}
}

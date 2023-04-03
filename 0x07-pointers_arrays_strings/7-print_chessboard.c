#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: variable
 * Return void
 */
void print_chessboard(char (*a)[8])
{
	int j;
	

	for (*a = 0; *a < 8; *a++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a);
		}
	}
}

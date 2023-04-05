#include "main.h"

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

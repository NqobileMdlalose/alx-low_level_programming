#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there*/

/*betty style do for function main goes there */
/**
 * main -Entry Point
 *
 * Description: Print negative and positive numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 'v';
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

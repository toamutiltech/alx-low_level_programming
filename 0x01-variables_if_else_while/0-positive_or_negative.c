#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *  * main - Introduction to Printf Function
 *  * srand - pick random numbers
 *  * @n: operand where calculation are pass to
 *  * if else: to test for positivity or negativity
 *  * printf - print statment
 *  * Return: 0 parameters
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive,\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero,\n", n);
	}
	else
	{
		printf("%d is nagative,\n", n);
	}
	return (0);
}

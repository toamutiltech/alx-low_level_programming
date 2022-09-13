#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *  * main - if else statement to test for negativity or positivity
 *  * srand - pick random numbers
 *  * @n: The number to be checked
 *  * @n: integar
 *  * if else: to test for positivity or negativity
 *  * printf - print statment
 *  * Return: 0 parameters
 */
int main(void)
{
	/*Declearing variable n */
	int n = 0;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

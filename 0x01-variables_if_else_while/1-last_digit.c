#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *  * main - if else statement to test for negativity or positivity
 *  * srand - pick random numbers
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

	if (n > 5)
	{
		lastDigit = n % 10;
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		lastDigit = n % 10;
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (n > 0 && n < 6)
	{
		printf("Last digit of %d is %d and is les than 6 and not 0\n", n, lastDigit);
	}
	else
	{
		printf("%d is less than 0\n", n);
	}
	return (0);
}

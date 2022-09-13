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
	int lastDigit = 0;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d", LastDigit, " is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d", lastDigit, " is %d and is 0\n", n);
	}
	else if (n > 0 && n < 6)
	{
		printf("Last digit of %d", lastDigit, " is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("%d is less than 0\n", n);
	}
	return (0);
}

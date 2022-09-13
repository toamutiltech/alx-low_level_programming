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

	l = n % 10;
	/*Getting the Last Digit*/
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("%d is less than 0\n", n);
	}
	return (0);
}

#include <stdio.h>
/* more headers goes there */

/**
 * main - if else statement to test for negativity or positivity
 * putchar - print statment
 * Return: 0 parameters
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

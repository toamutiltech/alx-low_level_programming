#include <stdio.h>
/* more headers goes there */

/**
 * main - if else statement to test for negativity or positivity
 * putchar - print statment
 * Return: 0 parameters
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; ++c)
		putchar("%c ", c);
	putchar("\n");
	return (0);
}

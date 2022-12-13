#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet.
* Return: Always return 0
*/

void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}

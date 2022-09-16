#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return:0
 */

void most_numbers(void)
{
	char n, c;
	int i = 0;
	
	while (n < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
		
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		i++;
	}
}

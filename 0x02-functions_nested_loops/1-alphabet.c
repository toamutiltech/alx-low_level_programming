#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
void print_alphabet(void)
{
	char alp = 'a';
	
	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	
	}
	_putchar ('\n');
}

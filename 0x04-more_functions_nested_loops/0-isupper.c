#include "main.h"
/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */
int _isupper(int c)
{
	if(c == 65 || c == 90)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
int main(void)
{
	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

#include <stdio.h>
/**
 * main - Introduction to sizeof Function
 * printf - print size of the varaibles
 * @inttype: integer
 * @chartype: Charaters
 * @longint_type: long integer
 * @lonint2_type: longest integer
 * @float_type: float integer
 * Return: 0 parameters
 *
 */
int main(void)
{
	int inttype;
	char chartype;
	long int longint_type;
	long long int longint2_type;
	float float_type;	
	printf("Size of char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of long int: %zu byte(s)\n", sizeof(longint_type));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longint2_type));
	printf("Size of float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}

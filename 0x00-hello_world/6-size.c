#include <stdio.h>
/**
 * main - Introduction to sizeof Function
 * printf - print size of the varaibles
 * Return: 0 parameters
 *
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of char: %zu byte(s)\n", sizeof(char *));
	printf("Size of int: %zu byte(s)\n", sizeof(int *));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int *));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int *));
	printf("Size of float: %zu byte(s)\n", sizeof(float *));
	return (0);
}

#include "main.h"
/**
 * swap_int - swap two variables a and b
 * @b: to be swap with a
 * @a: to be swap with b
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}

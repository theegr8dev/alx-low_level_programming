#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: interger 1
 * @b: interger 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 * @n: int pointer
 */
void reset_to_98(int *n)
{
	*n = 98;
	_putchar(*n / 10 + '0');
	_putchar(*n % 10 + '0');
	_putchar('\n');
}

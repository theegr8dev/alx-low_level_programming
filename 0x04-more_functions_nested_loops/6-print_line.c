#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of time line should be drawn
 *
 */
void print_line(int n)
{
	int m = 0;

	while (m < n)
	{
		_putchar('_');
		m++;
	}
	if (n <= 0 || m == n)
	{
		_putchar(10);
	}

}

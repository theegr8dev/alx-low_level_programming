#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 *
 */
void print_square(int size)
{
	int n = 0;

	if (size > 0)
	{
		while (n < size)
		{
			int m = 0;

			while (m < size)
			{
				_putchar('#');
				m++;
			}
			n++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, n, m;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (m = size; m > i; m--)
			{
				_putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

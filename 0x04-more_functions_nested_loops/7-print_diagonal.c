#include "main.h"

/**
 * print_diagonal - raws a diagonal line on the terminal
 * @n: number of times character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m < n)
		{
			int i = 0;

			while (i < m)
			{
				_putchar(' ');
				i++;
			}

			_putchar('\\');
			_putchar(10);
			m++;
		}
	}
	else
	{
		_putchar(10);
	}
}

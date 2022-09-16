#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: interger to start from
 */
void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m < 0)
			{
				int abs = m * -1;

				_putchar('-');
				if (abs < 10)
				{
					_putchar(abs + '0');
				}
				else
				{
					_putchar(abs / 10 + '0');
					_putchar(abs % 10 + '0');
				}
			}
			else
			{
				if (m < 10)
				{
					_putchar(m + '0');
				}
				else
				{
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
				}
			}
			if (m != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if
	(n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m >= 100)
			{
				_putchar(m / 10 / 10 + '0');
				_putchar(m / 10 / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			if (m != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}

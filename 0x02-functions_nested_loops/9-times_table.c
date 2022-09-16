#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n, m, a;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			a = n * m;
			if ((n * m) > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				if (m != 0)
					_putchar(' ');
				_putchar(a + '0');
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

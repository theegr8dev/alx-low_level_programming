#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int j;
	int i = 0;
	char s[] = "01234567891011121314";

	while (i < 10)
	{
		for (j = 0; j <= 19; j++)
		{
			_putchar(s[j]);
		}

		_putchar(10);
		i++;
	}
}

#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;
	int odd, even;

	while (*(str + len))
	{
		len++;
	}

	even = len / 2;
	odd = (len - 1) / 2;
	if (len % 2 == 0)
	{
		while (even < len)
		{
			_putchar(str[even]);
			even++;
		}
	}
	else
	{
		while (odd < len)
		{
			odd++;
			_putchar(str[odd]);
		}
	}
	_putchar(10);
}

#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (i < len)
	{
		_putchar(s[len - i - 1]);
		i++;
	}
	_putchar(10);
}

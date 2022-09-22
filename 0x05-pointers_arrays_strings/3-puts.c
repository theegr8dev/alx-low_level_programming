#include "main.h"

/**
 * _puts - that prints a string, followed
 * by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int c = 0;
	char s = str[c];

	while (s != '\0')
	{
		s = str[c++];
		_putchar(s);
	}
	_putchar(10);
}

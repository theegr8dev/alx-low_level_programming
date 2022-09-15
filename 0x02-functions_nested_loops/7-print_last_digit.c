#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: Integer to check
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = ((n * -1) % 10);
		_putchar(n + '0');
		return (n);
	}
	else if (n > 0)
	{
		n = (n % 10);
		_putchar(n + '0');
		return (n);
	}
	_putchar(n + '0');
	return (n);
}

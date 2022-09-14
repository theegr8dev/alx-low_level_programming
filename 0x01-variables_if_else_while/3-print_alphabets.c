#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int upper = 65;
	int lower = 97;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar(10);
	return (0);
}

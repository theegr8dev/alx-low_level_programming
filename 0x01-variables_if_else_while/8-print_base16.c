#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int base_10 = 0;
	int base_16 = 97;

	while (base_10 <= 9)
	{
		putchar(base_10 + '0');
		base_10++;
	}

	while (base_16 <= 102)
	{
		putchar(base_16);
		base_16++;
	}
	putchar(10);
	return (0);
}

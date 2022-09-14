#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting
 * using putchar()
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar(10);

	return 0;
}

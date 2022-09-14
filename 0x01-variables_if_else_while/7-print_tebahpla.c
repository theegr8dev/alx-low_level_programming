#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
*/
int main(void)
{
	int ascii = 122;

	while (ascii >=  97)
	{
		putchar(ascii);
		ascii--;
	}
	putchar(10);
	return (0);
}

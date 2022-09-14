#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
*/
int main(void)
{
	int ascii = 97;

	while (ascii <= 122)
	{
		putchar(ascii);
		ascii = ascii + 1;
	}
	putchar(10);
	return (0);
}

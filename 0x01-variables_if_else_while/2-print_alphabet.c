#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
*/
void main(void)
{
	int ascii = 97;

	while (ascii <= 122)
	{
		putchar(ascii);
		ascii = ascii + 1;
	}
	putchar(10);
}

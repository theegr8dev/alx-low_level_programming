#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in n
 *
 * Return: 0 if is falsy
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", lastDigit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", lastDigit);
	}
	else
	{
		printf("Last digit of n is %d\n", lastDigit);
	}
	return (0);
}

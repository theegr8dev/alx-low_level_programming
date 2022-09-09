#include <stdio.h>
/**
 * main - Print size of various types on the computer it is compiled and run
 *        on.
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	fprintf(stderr, "Anything\n");
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of element
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

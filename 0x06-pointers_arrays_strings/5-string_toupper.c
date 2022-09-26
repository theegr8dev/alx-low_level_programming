#include "main.h"

/**
 * string_toupper - Changes any lowercase letter
 * in a string to uppercase
 * @n: The string to check
 *
 * Return: The uppercased string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}

	return (n);
}

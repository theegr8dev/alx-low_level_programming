#include "main.h"
#include <stdio.h>

/**
 * _strlen - that returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}

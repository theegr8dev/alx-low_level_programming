#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: Source
 * @n: number of byte
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	for (; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}

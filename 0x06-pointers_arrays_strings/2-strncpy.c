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
	int d_len = 0, s_len = 0, m = 0;

	while (*(dest + d_len))
	{
		d_len++;
	}

	while (*(src + s_len))
	{
		s_len++;
	}

	while (m < n)
	{
		if (m > d_len)
		{
			break;
		}
		dest[m] = src[m];
		m++;
	}
	return (dest);
}

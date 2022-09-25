#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of byte from src
 *
 * Return: concatnated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0, s_len = 0, i = 0;

	while (*(dest + d_len))
	{
		d_len++;
	}
	while (*(src + s_len))
	{
		s_len++;
	}
	while (i < n)
	{
		if (i > s_len)
		{
			break;
		}
		dest[d_len + i] = src[i];
		i++;
	}
	return (dest);
}

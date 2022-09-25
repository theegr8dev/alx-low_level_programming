#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
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

	while (i < s_len)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	return (dest);
}

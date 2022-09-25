#include "main.h"

/**
 * _strcpy - copies string from one pointer to another
 * @dest: pointer 1
 * @src: pointer 2
 *
 * Return: the copied value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (*(src + len))
	{
		len++;
	}

	while (i < len + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

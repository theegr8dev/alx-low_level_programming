#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: buffer to fill
* @b: char to fill with
* @n: consant byte
*
* Return: pointer to memory area of buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

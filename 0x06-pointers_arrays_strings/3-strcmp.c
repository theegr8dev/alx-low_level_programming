#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if equal, >0 if s1 > s2
 * <0 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i = 0;

	while (*(s1 + s1_len))
	{
		s1_len++;
	}

	while (*(s2 + s2_len))
	{
		s2_len++;
	}

	while (i < s1_len && i < s2_len)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

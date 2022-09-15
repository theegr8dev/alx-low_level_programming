#include "main.h"

/**
 * _isalpha(int c) - checks for alphabetic character.
 * @c: character to check for
 *
 * Return: 1 if is true 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

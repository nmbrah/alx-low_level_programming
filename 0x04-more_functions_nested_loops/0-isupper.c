#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character is checking
 * Return: 1 if character is uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

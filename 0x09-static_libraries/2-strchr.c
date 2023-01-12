#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: the string to be searched
 * @c: The character to be located
 * Return: if c is found, a pointed and null is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

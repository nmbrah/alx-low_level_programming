#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: return 1 on sucess
 * on error, return -1 and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

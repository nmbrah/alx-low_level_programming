#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to be printed
 * Return: on sucess 1
 * on error: -1 is return, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

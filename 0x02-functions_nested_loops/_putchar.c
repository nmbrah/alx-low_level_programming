#include <unistd.h>

/**
 * _putchar - write the character c to srdout
 * @c: The character to print
 * Return: on sucess 1.
 * on error, -1 is return and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

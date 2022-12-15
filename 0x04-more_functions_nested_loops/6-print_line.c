#include "main.h"

/**
 * print_line - Prints _
 * @n: number of times the _ is printed 
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

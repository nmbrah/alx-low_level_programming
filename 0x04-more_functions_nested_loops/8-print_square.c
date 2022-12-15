#include "main.h"

/**
 * print_square - print a square using the # character
 * @size: the size of the sqaure
 */

void print_square(int size)
{
	int hgt,wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
			{
				_putchar('#');
			}
			if (hgt == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

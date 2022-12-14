#include "main.h"

/**
 * jack_bauer - function that prints every minute of the dady, 24 hour clock
 *  / 10 allows second digit to rotate
 *  for loop break before passing 24:00
 *  Return: 24 hour clook line by line
 */

void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}

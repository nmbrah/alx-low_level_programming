#include <stdio.h>

/**
 * main - Entru Point
 *
 * Return: Always return 0 (sucess)
 *
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num ++)
	{
		putchar((num % 10) + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

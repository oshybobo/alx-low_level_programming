#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *	followed by new line.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

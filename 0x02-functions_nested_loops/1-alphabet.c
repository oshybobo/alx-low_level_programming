#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed
 *	by new line
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	i = 0;

	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
}

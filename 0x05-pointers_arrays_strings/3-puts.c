#include "main.h"

/**
 * _puts - print a string and new line to stdout
 *
 * @str: string paramter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

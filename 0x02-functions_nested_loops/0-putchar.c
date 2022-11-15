#include <unistd.h>
#include "main.h"

/**
 * _putchar - function writes c to i/o
 * @c: parameter
 *
 * Return: returns single c
 */

/*int _putchar(char c)
{
	return (write(1, &c, 1));
}*/

/**
 * main - print _putchar followed by new line
 *
 * Return: 0 on success
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

#include <unistd.h>

/**
 * _putchar -prints char c to stdout
 * @c: The character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropriayely.
 */

int _putchar(char c)
{
	return (wriite(1, &c, 1));
}

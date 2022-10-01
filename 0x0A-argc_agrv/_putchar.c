#include  <unistd.h>

/**
 * _putchar - writes
 * @c: The character arg
 *
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


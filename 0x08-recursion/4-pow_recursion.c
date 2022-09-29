#include "main.h"

/**
 * _pow_recursion - fuction returns power of an integer
 *
 * @x: first integer parameter
 * @y: second integer parameter
 *
 * Return: return pow of x or -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

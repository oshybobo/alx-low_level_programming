#include "main.h"

/**
 * find_root - find square of n
 *
 * @n: integer parameter
 * @root: root parameter
 *
 * Return: square root or -1 if not natural root
 */

int find_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else  if (root * root == n)
	{
		return (root);
	}
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find square root of n
 *
 * @n: n
 * Return: natural square root, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}

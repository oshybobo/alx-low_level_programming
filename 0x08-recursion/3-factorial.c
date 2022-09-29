#include "main.h"

/**
 * factorial - function prints the factorial of n
 *
 * @n: parameter integer
 *
 * Return: factorial of n or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

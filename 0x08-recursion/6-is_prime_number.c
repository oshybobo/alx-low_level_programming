#include "main.h"

/**
 * is_prime - recursively divide
 * @n: integer param
 * @divisor: divisor
 * Return: Recursive function, 1 if prime and 0 if not
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	else if (n % dividor == 0)
	{
		return (0);
	}
	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - confirm prime number
 *
 * @n: integer parameter
 *
 * Return: 1 if prime; otherwiwse 0
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (is_prime(n, divisor));
}

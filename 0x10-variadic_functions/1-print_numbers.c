#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers followed by a newline
 * @separator: string argument
 * @n: arg number
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			print("%d", va_arg(valist, int);
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);

	}
	printf("\n");
}

#include <stdio.h>
/**
 * main - entry point - Function to print single digits in base 10
 *		starting from 0
 *
 * Return: return 0 always
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - entry point - function prints out all single digits of base 10
 *			starting from 0, followed by comma, space, newline
 * Return: 0 Always
 */

int main(void)
{
	char i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);

}

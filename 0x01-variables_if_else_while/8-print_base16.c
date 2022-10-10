#include <stdio.h>

/**
 * main - entry point - function prints out lower case
 *		alphabet, Upper Case, followed by new line
 * Return: 0 Always
 */

int main(void)
{
	char ch;
	char sh;

	ch = 48;
	sh = 'a';

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}

	while (sh <= 'f')
	{
		putchar(sh);
		sh++;
	}
	putchar('\n');
	return (0);

}

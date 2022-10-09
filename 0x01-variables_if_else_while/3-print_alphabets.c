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

	ch = 'a';
	sh = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (sh <= 'Z')
	{
		putchar(sh);
		sh++;
	}
	putchar('\n');
	return (0);

}

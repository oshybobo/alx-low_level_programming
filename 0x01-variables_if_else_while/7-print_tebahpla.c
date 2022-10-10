#include <stdio.h>

/**
 * main - entry point - function prints out lower case
 *		alphabet, Upper Case, followed by new line
 * Return: 0 Always
 */

int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);

}

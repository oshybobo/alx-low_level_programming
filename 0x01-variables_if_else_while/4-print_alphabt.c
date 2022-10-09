#include <stdio.h>

/**
 * main - entry point - function prints out lower case
 *		alphabet, Upper Case, followed by new line
 * Return: 0 Always
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if ((ch == 'e') || (ch == 'q'))
		{}
		else
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');
	return (0);

}

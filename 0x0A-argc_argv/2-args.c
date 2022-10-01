#include "main.h"

/**
 * main - print arg to a new line
 * @argc: counter arg
 * @argv: pointer to arrat
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);

}

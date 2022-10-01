#include "main.h"

/**
 * main - print number of args passed
 * @argc: counter arg
 * @argv: pointer to arrat
 * Return: 0 on sucess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);

}

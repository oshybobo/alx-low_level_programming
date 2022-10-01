#include "main.h"
#include <stdio.h>

/**
 * main - entry point & print program name
 * @argc: first arg and arg counter
 * @argv: pointer to array of arg
 *
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>
/**
 * main - print multiplication of args
 * @argc: counter arg
 * @argv: numbers to multiply
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	if (argc !=3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}

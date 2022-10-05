#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
/**
 * is_num - iterate to check if it is num
 * @argvv: a argv
 * Return: 0 on success
 */
bool is_num(char *argvv)
{
	int i;

	for (i = 0; argvv[i]; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point - find sum
 * @argc: counter
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	if (argc == i)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[i]) == 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}

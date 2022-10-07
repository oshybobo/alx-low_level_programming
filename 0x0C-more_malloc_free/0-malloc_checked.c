#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size to malloc
 * Return: pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

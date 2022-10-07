include "main.h"

/**
 * *malloc_checked - allocates memory
 * @a: size to malloc
 * Return: pointer to allocated mem
 */

void *malloc_checked(unsigned int a)
{
	void *p;

	p = malloc(a);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

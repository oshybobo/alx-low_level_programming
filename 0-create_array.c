#include <stdlib.h>

/**
 * create_array - creates an array of char & initializes it with specific char
 * @size: array size
 * @c: characters to initialize
 *
 * Return: array pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

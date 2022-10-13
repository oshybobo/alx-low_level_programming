#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function pointer that executes int search
 * @array: array
 * @size: size of array
 * @cmp: pointer for searching and comparing
 *
 * Return: -1 if search fails
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);

	}
	return (-1);
}


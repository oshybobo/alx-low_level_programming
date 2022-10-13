#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function array on each element
 * @array: array
 * @size: size of array
 * @action: pointer to function needed for execution
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}

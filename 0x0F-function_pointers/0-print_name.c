#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this function prints name
 * @name: param for function
 * @f: Param for executing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

#include "main.h"

/**
 * _strcpy - copes a string from one pointer to another
 * inclusive of the terminable null byte (\0)
 *
 * @dest: destination of string
 * @src: source of string input
 *
 * Return: point back to dest param
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[j] = src[i];
		++j;
	}
	dest[j] = '\0';

	return (dest);
}

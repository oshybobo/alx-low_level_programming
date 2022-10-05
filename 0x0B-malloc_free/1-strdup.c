#include <stdlib.h>

/**
 * *_strdup - duplicate string
 * @str: input string
 *
 * Return: null if str = Null
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	s = malloc((j + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;

	}

	return (s);
}


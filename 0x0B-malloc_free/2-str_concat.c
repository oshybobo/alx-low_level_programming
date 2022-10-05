#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: first string argument
 * @s2: Second string argument
 *
 * Return: Null on no success
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int c, k;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s = malloc((i * sizeof(char)) + ((j + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
	{
		s[c] = s1[c];
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		s[c] = s2[k];
		c++;
	}

	s[c] = '\0';

	return (s);
}



#include "main.h"

/**
 * compare - compare head & tails parameters
 * @head: first param
 * @tail: second param
 * Return: 1 if palindrome and 0 if not
 */
int compare(char *head, char *tail)
{
	if (head >= tail)
	{
		return (1);
	}
	else if (*head == *tail)
	{
		return (compare(head + 1, tail - 1));
	}
}

/**
 * _strlen - find length of string
 * @s: string param
 * Return: return string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string param
 * Return: 1 if true and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}

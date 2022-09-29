/**
 * substring_match - Function to compare strings and find match
 * @s1: string param 1
 * @s2: string param 2
 * @after_wldcd: placeholder to determine
 * Return: 1 if matched and 0 if not
 */
int substring_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (substring_match(s1, s2 + 1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	else if (*s2 == '*')
	{
		return (substring_match(s1, s2 + 1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (substring_match(s1 + 1, s2 + 1, after_wldcd));
	}
	else
	{
		return (substring_match(s1 + 1, after_wldcd, after_wldcd));
	}
}

/**
 * wildcmp - compare string with wildcard
 * @s1: string param 1
 * @s2: string param 2
 * Return: 1 if match and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}

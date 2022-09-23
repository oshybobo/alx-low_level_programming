/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, j = 0;
	int al[] = {97, 101, 111, 116, 108};
	int bl[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == al[i] || s[j] == bl[i])
			{
				s[j] = n[i];
				break;
			}
		}
		j++;
	}

	return (s);
}


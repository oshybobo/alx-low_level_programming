/**
 * _strncpy - Function copies string
 *
 * @dest: pointer destination
 * @src: pointer to input source
 * @n: bytes of input source (src)
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

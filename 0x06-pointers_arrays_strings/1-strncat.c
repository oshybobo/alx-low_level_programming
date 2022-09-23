/**
 * _strncat - function that joins two strings w/n bytes
 *
 * @dest: pointer to destination input
 * @src: pointer to src input
 * @n: number of nytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	
	
	dest[i + j] = '\0';
	
	return (dest);
}

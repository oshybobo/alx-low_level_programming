/**
 * _strcat - function that concatenates two strings
 *
 * @dest: printer to dest
 * @src: pointer to src
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i])
		i++;
	for (j = 0; src[j] ; j++)
		dest[c++] = src[j];

	return (dest);
}

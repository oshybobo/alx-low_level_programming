/**
 * reverse_array - A function that reverses the content of an array
 *
 * @a: arg for array integer
 * @n: number of elements to swap
 *
 * Return: basically nothing - void
 */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;

	}

}

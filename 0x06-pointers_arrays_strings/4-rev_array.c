#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n;
	int k;

	i = 0;
	while (i < n)
	{
		j--;
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
	}
}

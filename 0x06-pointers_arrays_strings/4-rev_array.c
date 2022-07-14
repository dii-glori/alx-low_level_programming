#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int k;

	i = 0;
	while (i < n)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;
		i++;
		n--;
		k++;
	}
}

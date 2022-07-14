#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	i = 0;
	while (i < n / 2)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
		i++;
	}
}

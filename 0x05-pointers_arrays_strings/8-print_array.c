#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}

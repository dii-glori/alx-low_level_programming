#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int length;

	a = a[n];
	length = sizeof(a) / sizeof(a[n]);

	i = 1;
	while (i <= length)
	{
		if (i == length)
		{
			printf("%d", a[n]);
		}
		printf("%d, ", a[n]);
		i++;
	}
}

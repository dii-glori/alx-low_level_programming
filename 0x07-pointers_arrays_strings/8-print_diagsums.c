#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @size: the size of the array
 * @a: the name of the array
 */
void print_diagsums(int *a, int size)
{
	int i, row;
	int firstDiagonalSum = 0;
	int secondDiagonalSum = 0;
	int total = size * size;

	i = 0;
	while (i < total)
	{
		row = i / size;
		firstDiagonalSum += a[i + row];
		secondDiagonalSum += a[i + size - row - 1];
		i += size;
	}
	printf("%d, %d\n", firstDiagonalSum, secondDiagonalSum);
}

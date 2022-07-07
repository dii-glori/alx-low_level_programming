#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: input
 */

void print_triangle(int size)
{
	int a;
	int space = size - 1;
	int hash = 1, j, k;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (j = 0; j < space; j++)
			_putchar(' ');
		for (k = 0; k < hash; k++)
			_putchar('#');
		_putchar('\n');
		space--;
		hash++;
	}
}

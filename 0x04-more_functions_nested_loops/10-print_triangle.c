#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 */

void print_triangle(int size)
{
	int a;
	int b = c;
	int c = size - 1;

	if (size <= 0)
		_putchar('\n');

	a = 0;
	while (a < size)
	{
		while (c < a)
		{
			_putchar(' ');
			c++;
		}
		_putchar('#');

		b = c;
		c = c - 1;
		b = c - 1;
	}
	_putchar('\n');
}

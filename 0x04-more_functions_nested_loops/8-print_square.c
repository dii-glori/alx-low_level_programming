#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

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
	b = 0;
	while (b < a)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}

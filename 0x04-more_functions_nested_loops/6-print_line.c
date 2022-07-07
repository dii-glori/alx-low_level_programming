#include "main.h"

/**
 * print_line - straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - diagonal line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int c;

	if (n <= 0)
		_putchar('\n');
	i = 0;
	while (i < n)
	{
		c = 0;
		while (c < i)
		{
			_putchar(' ');
			c++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

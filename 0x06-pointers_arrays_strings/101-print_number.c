#include "main.h"

void print_helper(unsigned int n);

/**
 * print_number - prints an integer
 * @n: a number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_helper((unsigned int)n);
}

/**
 * print_helper - prints an unsigned integer
 * @n: an unsigned integer to print
 */

void print_helper(unsigned int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_helper(n / 10);
		_putchar((n % 10) + '0');
	}
}

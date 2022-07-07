#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 apart from 2 and 4
 */

void print_most_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}


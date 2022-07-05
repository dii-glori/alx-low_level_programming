#include "main.h"

/**
 * times_table -  prints the 9 times table
 */
void times_table(void)
{
	int row;
	int column;
	int mul;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= 9; column++)
		{
			mul = row * column;
			if ((mul / 10) > 0)
			{
				_putchar((mul / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((mul % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

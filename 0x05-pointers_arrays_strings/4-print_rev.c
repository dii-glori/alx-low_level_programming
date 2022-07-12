#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		count++;
	}

	while (--count >= 0)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}

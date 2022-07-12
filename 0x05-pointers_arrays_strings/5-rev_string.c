#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
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

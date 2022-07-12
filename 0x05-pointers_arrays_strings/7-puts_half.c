#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = 0;
	int half_length;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		length_of_the_string++;
	}

	half_length = length_of_the_string / 2;

	if (length_of_the_string % 2 != 0)
	{
		half_length = (length_of_the_string / 2) + 1;
	}

	i = half_length;

	while (i < length_of_the_string)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

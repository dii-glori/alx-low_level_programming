#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		count++;
	}

	count--;
	i = 0;

	while (i < count)
	{
		k = s[i];
		s[i] = s[count];
		s[count] = k;
		i++;
		count--;
	}
}

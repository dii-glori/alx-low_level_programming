#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: accepted bytes
 * Return:  number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
				continue;
			j++;
		}
		i++;

		if (accept[j] == '\0')
			break;
	}

	return (count);
}

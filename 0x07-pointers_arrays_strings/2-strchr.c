#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: first occurrence of the character
 * Return: a pointer or null
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else
			return (&s[i]);
	}
	if (c == '\0')
		return (&s[i]);

	return (NULL);
}

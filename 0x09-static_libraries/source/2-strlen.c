#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string of characters
 * Return: count.
 */
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

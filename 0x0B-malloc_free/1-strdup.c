#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string
 *
 * Return: pointer to duplicate or NULL
 */
char *_strdup(char *str)
{
	int size, i = 0;
	char *ar;

	if (s == NULL)
		return (NULL);

	size = strlen(s) + 1;
	ar = malloc(size * sizeof(char));

	if (!ar)
		return (NULL);
	while (i < size)
	{
		ar[i] = s[i];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}

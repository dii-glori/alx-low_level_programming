#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - form a new string from two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to new or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = strlen(s1);
	n2 = strlen(s2);
	arr = malloc((n1 + n2 + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	while (i < n1)
	{
		arr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n2)
	{
		arr[n1 + i] = s2[i];
		i++;
	}
	arr[n1 + i] = '\0';
	return (arr);
}

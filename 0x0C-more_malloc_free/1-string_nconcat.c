#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size in bytes
 *
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int n1;
	int n2;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n < n2)
		n2 = n;

	ar = malloc(n1 + n2 + 1);
	if (ar == NULL)
		return (NULL);
	while (i < n1)
	{
		ar[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n2)
	{
		ar[n1 + i] = s2[i];
		i++;
	}
	ar[n1 + i] = '\0';
	return (ar);
}

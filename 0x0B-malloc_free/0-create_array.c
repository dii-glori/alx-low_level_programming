#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of char
 * @c: specific char
 *
 * Return: NULL if size = 0 and a pointer to the array, or null if otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char ar;

	if (size == '0')
		return (NULL);

	ar = malloc(size * sizeof(char));

	while (i < size && ar)
	{
		arr[i] = c;
		i++;
	}
	return (ar);
}

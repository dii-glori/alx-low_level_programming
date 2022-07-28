#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	int i;

	if (!nmemb || !size)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	while (i < nmemb * size)
		((char *)ar)[i++] = 0;
	return (ar);
}

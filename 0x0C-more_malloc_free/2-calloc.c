#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * _calloc - allocates a memory to array
 * @n: number of elements
 * @size: memory size in bytes
 * Return: pointer to the memory
 */
void *_calloc(unsigned int n, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (!n || !size)
		return (NULL);
	ptr = malloc(n * size);
	while (i < n * size && ptr)
		((char *)ptr)[i++] = 0;
	return (ptr);
}

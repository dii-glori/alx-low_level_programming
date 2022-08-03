#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: an array
 * @size: size of array
 * @cmp: pointer to the function
 * Return: index of needle or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
		if (cmp(array[i++]))
			return (i - 1);
	return (-1);
}

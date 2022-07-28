#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * array_range - creates and populates an array with values in given range
 * @min: lower bound (included)
 * @max: upper bound (included)
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
		ptr[i++] = min++;
	return (ptr);
}

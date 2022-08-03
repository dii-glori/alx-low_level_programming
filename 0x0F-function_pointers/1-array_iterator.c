#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
		action(array[i++]);
}

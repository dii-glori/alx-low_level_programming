#include "main.h"
#include <stdlib.h>
#include<stddef.h>

/**
 * alloc_grid - creates a 2d int array
 * @width: no of cols
 * @height: no rows
 *
 * Return: pointer to a 2d array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr, i = 0, j = 0;

	if (!width || !height)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (!arr)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			/* free all previously assigned memories */
			while (i >= 0)
				free(arr[i--]);
			free(arr);
			return (NULL);
		}
		else
		{
			j = 0;
			while (j < width)
				arr[i][j++] = 0;
		}
		i++;
	}
	return (arr);
}

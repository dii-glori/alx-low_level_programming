#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d int array
 * @grid: array pointer
 * @height: no rows
 *
 * Return: pointer to a 2d array or NULL
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
		free(grid[--height]);
	free(grid);
}

#include "main.h"
/**
 * free_grid - frees the memory of a 2-D Array
 * @grid: pointer to a 2-D array
 * @height: number of rows in the array
 * Return: nothing!
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* free memory for each element in row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* free memory for each row */
	free(grid);
}

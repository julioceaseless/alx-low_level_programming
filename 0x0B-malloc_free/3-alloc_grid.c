#include "main.h"
/**
 * alloc_grid - builds a 2D array fills it with elements
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	/* allocate memory for rows */
	grid = (int **)  malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	/* allocate memory for columns */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		/* check for NULL and roll back */
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

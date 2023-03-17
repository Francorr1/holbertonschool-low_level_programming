#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Main function
 * @width: an int
 * @height: an int
 *
 * Return: result
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

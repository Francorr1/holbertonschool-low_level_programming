#include <stdio.h>
/**
 * alloc_grid - Main function
 * @width: An int
 * @height: also an int
 *
 * Return: Result
 */
int **alloc_grid(int width, int height)
{
	char *ma;
	int arr[height][width];
	int i, j, x;

	x = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	ma = malloc(height * width);
	if (ma == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ma[x] = arr[i][j];
			x++;
		}
	}
	return (ma);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Stores all values from min to max in memory
 * @min: Min value
 * @max: Max value
 *
 * Return: Resulting pointer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	j = 0;
	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * max);
	if (p == NULL)
		return (NULL);
	i = min;
	for (; i < max; i++)
	{
		p[j] = i;
		j++
	}
	return (p);
}

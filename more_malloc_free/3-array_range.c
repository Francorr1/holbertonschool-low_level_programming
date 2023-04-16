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
	int i, j, cont;
	int *p;

	j = 0;
	i = min;
	if (min > max)
		return (NULL);
	for (cont = 0; i < max; cont++)
		i++;
	p = malloc(sizeof(int) * cont);
	if (p == NULL)
		return (NULL);
	i = min;
	for (; i < max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}

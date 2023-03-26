#include "function_pointers.h"
/**
 * int_index - Looks for an integer
 * @array: The array to be searched
 * @size: Size of said array
 * @cmp: Function used to compare inegers
 *
 * Return: The result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

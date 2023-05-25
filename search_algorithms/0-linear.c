#include "search_algos.h"
/**
 * linear_search - Looks for a value using linear search
 * @array: The array to search
 * @size: Size of said array
 * @value: Value to look for
 *
 * Return: The index of the value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

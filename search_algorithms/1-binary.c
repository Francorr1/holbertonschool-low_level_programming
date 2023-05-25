#include "search_algos.h"
/**
 * binary_search - Looks for a value using binary search
 * @array: The array to search
 * @size: Size of said array
 * @value: The value to look for
 *
 * Return: The index of the value or -1 if it's not there
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = 0, m = 0;

	if (!array)
	{
		return (-1);
	}
	h = size - 1;
	while (l <= h)
	{
		m = (l + h) / 2;
		print_array(array, l, h);
		if (array[m] == value)
		{
			return (m);
		}
		else if (value > array[m])
		{
			l = m + 1;
		}
		else
		{
			h = m - 1;
		}
	}
	return (-1);
}
/**
 * print_array - Prints a portion of an array
 * @array: The array to print
 * @l: The lowest index to print
 * @h: The highest index to print
*/
void print_array(int *array, size_t l, size_t h)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		printf("%d", array[i]);
		if (i < h)
		{
			printf(", ");
		}
	}
	printf("\n");
}

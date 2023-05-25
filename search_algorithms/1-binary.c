#include "search_algos.h"
/**
 * 
 * 
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
 * 
 * 
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
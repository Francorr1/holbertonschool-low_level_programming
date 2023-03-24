#include "function_pointers.h"
/**
 * array_iterator - Executes action on every element of the array
 * @array: Said array
 * @size: size of said array
 * @action: The action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i <= size; i++)
	{
		(*action)(array[i]);
	}
}

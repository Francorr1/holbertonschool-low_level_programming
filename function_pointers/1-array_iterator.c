#include "function_pointers.h"
/**
 * array_iterator - Executes action on every element of the array
 * @array: Said array
 * @size: size of said array
 * @action: The action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL || array = NULL || size == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

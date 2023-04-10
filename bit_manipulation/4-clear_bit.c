#include "main.h"
/**
 * clear_bit - Takes the bit in the position INDEX and makes it a 0
 * @n: Where to change the bit
 * @index: The bit to change
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

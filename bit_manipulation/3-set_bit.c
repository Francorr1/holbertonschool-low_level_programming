#include "main.h"
/**
 * set_bit - Sets a bit to 1 in the position INDEX
 * @n: Where to set the bit
 * @index: The position in where to set the bit
 *
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}

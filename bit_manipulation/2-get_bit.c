#include "main.h"
/**
 * get_bit - Gets the bit in the position INDEX
 * @n: Where to get the bit from
 * @index: The position to get the bit from
 *
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	n = n >> index;
	bit = n & 1;
	if (bit != 1 && bit != 0)
	{
		return (-1);
	}
	return (bit);
}

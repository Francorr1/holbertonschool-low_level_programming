#include "main.h"
/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: Said binary number
 *
 * Return: The resulting unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[i]; b++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		else
		{
			res *= 2;
			res += (b[i] + "0");
		}
	}
	return (res);
}

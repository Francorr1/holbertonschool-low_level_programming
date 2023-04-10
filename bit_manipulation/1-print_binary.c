#include "main.h"
/**
 * print_binary - Converts a decimal number to binary
 * @n: Said decimal number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

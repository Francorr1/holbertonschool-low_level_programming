#include "main.h"
/**
 * print_binary - Converts a decimal number to binary
 * @n: Said decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = 0;
	int i = 0;

	while (n != 0)
	{
		bin = n & 1;
		n = n >> 1;
		bin = bin << 1;
	}
	for (; bin[i], i++)
	{
		_putchar(bin[i]);
	}
}

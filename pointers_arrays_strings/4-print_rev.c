#include "main.h"
/**
 * print_rev - Main function
 * @s: Address of s
 */
void print_rev(char *s)
{
	int len;
	int i;

	for (i = 0; i < *s i++)
	{
		len++;
	}
	while (len != 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
}

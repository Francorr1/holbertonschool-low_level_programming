#include "main.h"
/**
 * print_rev - Main function
 * @s: Address of s
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(*s);
	while (len != 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
}

#include "main.h"
/**
 * print_rev - Main function
 * @s: Address of s
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		continue;
	}
	for (; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

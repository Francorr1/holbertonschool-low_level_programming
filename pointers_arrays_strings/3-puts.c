#include "main.h"
/**
 * _puts - Main function
 * @str: Address of st
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

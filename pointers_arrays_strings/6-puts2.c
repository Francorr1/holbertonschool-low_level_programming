#include "main.h"
/**
 * puts2 - Main function
 * @str: Address of st
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}

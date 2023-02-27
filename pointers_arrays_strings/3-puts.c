#include "main.h"
/**
 * _puts - Main function
 * @str: Address of st
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}
}

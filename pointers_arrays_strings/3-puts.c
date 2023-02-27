#include "main.h"
/**
 * _puts - Main function
 * @str: Address of st
 */
void _puts(char *str)
{
	char es;

	while (*str != '\0')
	{
		es = str;
		_putchar(es);
		str++;
	}
}

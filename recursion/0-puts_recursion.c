#include "main.h"
/**
 * _puts_recursion - Main function
 * @s: Address of s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

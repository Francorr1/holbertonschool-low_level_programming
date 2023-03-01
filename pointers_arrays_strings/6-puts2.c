#include "main.h"
/**
 * puts2 - Main function
 * @str: Address of st
 */
void puts2(char *str)
{
	for (i = 0; str[i]; i++)
		continue;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

#include "main.h"
/**
 *
 *
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i]; i++)
		continue;
	n = i / 2;
	for (; n <= i; n++)
		_putchar(str[n]);
}

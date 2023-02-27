#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		continue;
	i -= 1;
	for (; s[i]; i--)
		putchar(s[i]);
	putchar(10);
}

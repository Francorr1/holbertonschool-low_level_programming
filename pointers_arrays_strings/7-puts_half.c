#include "main.h"
/**
 * puts_half - Main Function
 * @str: Address of str
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i]; i++)
		continue;
	n = i / 2;
	if (n % 2 == 0)
	{
		for (; n <= i; n++)
			_putchar(str[n]);
	}
	else
	{
		n++;
		for (; n <= i; n++)
			_putchar(str[n]);
	}
	_putchar(10);
}

#include "main.h"
/**
 * print_line - Entry point
 * @n: int
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	else
		_putchar('\n');
	_putchar('\n');
}

#include "main.h"
/**
 * print_line - Entry point
 * @n: int
 */
void print_diagonal(int n)
{
        int i;
	int j;

        if (n > 0)
        {
                for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
        }
        _putchar('\n');
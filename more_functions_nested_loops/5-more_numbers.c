#include "main.h"
/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
	int i;
	int n1;

	for (i = 0; i <= 9; i++)
	{
		for (n1 = 0; n1 <= 14; n1++)
			_putchar(n1 + '0');
		_putchar('\n');
	}
}

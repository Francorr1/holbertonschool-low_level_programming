#include "main.h"
/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
	int i;
	char n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n < '14'; n++)
			_putchar(n);
		_putchar('\n');
	}
}

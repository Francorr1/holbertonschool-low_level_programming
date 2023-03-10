#include "main.h"
/**
 * jack_bauer - Entry point
 * 
 * Description: Size of
 *
 * Return: On success 0
 */
void jack_bauer(void)
{
	int h;
	int min;

	while (h < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		h++;
	}
}

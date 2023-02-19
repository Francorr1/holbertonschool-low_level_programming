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
	int h1;
	int h2;
	int m1;
	int m2;

	h1 = '0';
	h2 = '0';
	m1 = '0';
	m2 = '0';
	while (h1 != '2' && h2 != '4')
	{
		while (m1 != '6' && m2 != '0')
		{
			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
			m2++;
			if (m2 == '9')
			{
				m2 = '0';
				m1++;
			}
		}
		m1 = '0';
		m2 = '0';
		h2++;
		if (h2 == '9')
		{
			h2 = '0';
			h1++;
		}
	}
	
}

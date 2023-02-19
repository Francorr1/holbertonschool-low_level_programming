#include "main.h"
/**
 * _abs - Entry point
 * @n: char
 * Description: Size of
 *
 * Return: On success 0
 */
int _abs(int n)
{
	int i;
	int l;

	l = '0';
	i = '0';
	if (n > '0')
	{
		while (i < n)
		{
			i++;
			l++;
		}
	}
	if (n < '0')
	{
		while (i > n)
		{
			i--;
			l++;
		}
	}
	return (l);
}

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

	i = '0';
	if (n > 0)
	{
		i = n;
	}
	if (n < '0')
	{
		i = n * -1;
	}
	return (i);
}

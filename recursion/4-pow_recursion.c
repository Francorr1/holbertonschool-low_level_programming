#include "main.h"
/**
 * _pow_recursion - Main function
 * @x: an int
 * @y: an int
 *
 * Return: something lmao
 */
int _pow_recursion(int x, int y)
{
	int i;


	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	i = x* _pow_recursion(x, y - 1);
	return (i);
}

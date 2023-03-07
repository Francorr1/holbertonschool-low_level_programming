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
	if (y == 0)
	{
		return (x);
	}
	if (y < 0)
	{
		return (-1);
	}
	x = x * x;
	y--;
	_pow_recursion(x, y);
	return (x);
}

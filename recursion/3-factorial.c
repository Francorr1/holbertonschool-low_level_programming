#include "main.h"
/**
 * factorial - Main function
 * @n: an int
 *
 * Return: idk
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	factorial(n * (n -1));
	return (n);
}

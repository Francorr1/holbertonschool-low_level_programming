#include "main.h"
/**
 *
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	n = (n / (n / 2) + (n / 2)) / 2;
	return (n);
}

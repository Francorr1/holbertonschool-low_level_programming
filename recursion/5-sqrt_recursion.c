#include "main.h"
/**
 *
 *
 */
int _sqrt_recursion(int n)
{
	if (n % 10 != 0 || n <= 0)
	{
		return (-1);
	}
	n = (n / (n / 2) + (n / 2)) / 2;
	return (n);
}

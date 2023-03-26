#include "variadic_functions.h"
/**
 * sum_them_all - Sums all given arguments
 * @n: Number of arguments to sum
 *
 * Return: The result
 */
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i;

	va_list val;
	va_start(val, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		res += va_arg(val, int);
	va_end(val);
	return (res);
}

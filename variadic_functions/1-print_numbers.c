#include "variadic_functions.h"
/**
 * print_numbers - Prints all numbers given to it
 * @separator: Used to divide the printed numbers
 * @n: Numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list val;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}

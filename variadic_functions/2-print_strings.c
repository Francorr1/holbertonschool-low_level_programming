#include "variadic_functions.h"
/**
 * print_strings - Prints the strings it recieves
 * @separator: Used to separate the printed strings
 * @n: Number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list val;
	char *str;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char *)
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}

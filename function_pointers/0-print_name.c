#include "main.h"
/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

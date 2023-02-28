#include "main.h"
#include <stdio.h>
/**
 * print_array - Main function
 * @a: Address of a
 * @n: An int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Main function
 * @a: Address of a
 * @size: an int
 */
void print_diagsums(int *a, int size)
{
	int diag1;
	int diag2;
	int i;

	diag1 = 0;
	diag2 = 0;
	for (i = 0; i < size; i++)
	{
		diag1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		diag2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", diag1, diag2);
}

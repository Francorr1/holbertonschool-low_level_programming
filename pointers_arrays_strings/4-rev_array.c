#include "main.h"
/**
 * reverse_array - Main function
 * @a: Address of a
 * @n: an int
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int aux[1000];

	j = n;
	for (i = 0; i <= n; i++)
	{
		aux[i] = a[j];
		j--;
	}
	for (i = 0; i <= n; i++)
	{
		a[i] = aux[i];
	}
}

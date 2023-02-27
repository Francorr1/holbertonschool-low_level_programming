#include "main.h"
/**
 * swap_int - Main function
 * @a: Address of a
 * @b: Address of b
 */
void swap_int(int *a, int *b)
{
	int ad;
	int bd;

	ad = *a;
	bd = *b;
	*a = bd;
	*b = ad;
}

#include "main.h"
/**
 * _isupper - Entry point
 * @c: char
 * Description: Size of
 *
 * Return: On success 0
 */
int _isupper(int c)
{
	int r;
	if (c >= 64 && c <= 91)
		r = 1;
	else
		r = 0;
	return (r);
}

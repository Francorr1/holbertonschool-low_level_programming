#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: char
 * Description: Size of
 *
 * Return: On success 0
 */
int print_last_digit(int n)
{
	int i;
	char l;

	i = n % 10;
	l = i;
	_putchar(l);
	return (i);
}

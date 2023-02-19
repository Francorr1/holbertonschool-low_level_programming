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

	i = n % 10;
	_putchar((n % 10) + '0');
	return (i);
}

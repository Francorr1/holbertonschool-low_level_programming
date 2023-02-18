#include "main.h"
/**
 * print_sign - Entry point
 * @n: char
 * Description: Size of
 *
 * Return: On success 0
 */
int print_sign(int n)
{
int r;
if (n == 0)
{
r = 0;
_putchar('0');
}
if (n > 0)
{
r = 1;
_putchar('+');
}
if (n < 0)
{
r = -1;
_putchar('-');
}
return (r);
}

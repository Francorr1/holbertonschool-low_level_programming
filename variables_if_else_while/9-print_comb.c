#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Size of
 *
 * Return: Always 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; ++c)
{
putchar(c);
if (c < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

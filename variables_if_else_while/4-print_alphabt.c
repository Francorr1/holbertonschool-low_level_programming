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
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c == 'q' || c == 'e')
c = c;
else
putchar(c);
}
putchar('\n');
return (0);
}

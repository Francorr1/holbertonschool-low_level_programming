#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Size of
 *
 * Return: On success 0
 */
int main(void)
{
char frase[] = "_putchar";
int i = '0';
for (; i <= '7'; i++)
_putchar(frase[i]);
_putchar('\n');
return (0);
}

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
char frase[7] = "_putchar";
int i;
for (i = '0'; i <= '7'; i++)
_putchar(frase[i]);
_putchar('\n');
return (0);
}

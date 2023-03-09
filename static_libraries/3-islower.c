#include "main.h"
/**
 * _islower - Entry point
 * @c: char
 * Description: Size of
 *
 * Return: On success 0
 */
int _islower(int c)
{
int r;
if (c >= 96 && c <= 123)
r = 1;
else
r = 0;
return (r);
}

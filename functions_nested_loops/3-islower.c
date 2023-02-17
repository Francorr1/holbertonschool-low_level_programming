#include "main.h"
/**
 * _islower - Entry point
 *
 *
 * Description: Size of
 *
 * Return: On success 0
 */
int _islower(int c)
{
int r;
if (c >= 'A' && c <= 'Z')
r = 0;
else if (c >= 'a' && c <= 'z')
r = 1;
return (r);
}

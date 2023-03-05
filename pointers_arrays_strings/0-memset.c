#include "main.h"
/**
 * _memset - Main function
 * @s: Address of s
 * @b: address of b
 * @n: address of n
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i == n; i++)
	{
		s[i] = b;
	}
	return (s);
}

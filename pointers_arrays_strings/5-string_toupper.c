#include "main.h"
/**
 * string_toupper - Main function
 * @s: Address of s
 *
 * Return: res
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else
			continue;
	}
	return (s);
}

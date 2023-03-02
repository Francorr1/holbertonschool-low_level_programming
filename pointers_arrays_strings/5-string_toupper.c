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
	char res;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			res = s[i] - 32;
		}
		else
			continue;
	}
	return (res);
}

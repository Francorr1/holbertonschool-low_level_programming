#include "main.h"
/**
 * string_toupper - Main function
 * @s: Address of s
 *
 * Return: res
 */
char res[1000];

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			res[i] = s[i] - 32;
		}
		else
			continue;
	}
	return (*res);
}

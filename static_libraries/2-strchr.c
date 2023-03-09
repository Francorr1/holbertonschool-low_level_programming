#include "main.h"
/**
 * _strchr - Main function
 * @s: Address of s
 * @c: char c
 *
 * Return: something, I don´t know what
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			break;
		}
		else
		{
			ret = '\0';
		}
	}
	return (ret);
}

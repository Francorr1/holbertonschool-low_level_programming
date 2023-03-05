#include "main.h"
/**
 * _strchr - Main Function
 * @s: Address of s
 * @c: a char
 *
 * Return: I dont even know anymore
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s == accept[i])
			{
				return(s);
			}
		}
		return ('\0');
	}
}

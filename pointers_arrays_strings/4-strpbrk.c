#include "main.h"
/**
 * _strchr - Main Function
 * @s: Address of s
 * @c: a char
 *
 * Return: I dont even know anymore
 */
char *_strpbrk(char *s, char *accept)
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

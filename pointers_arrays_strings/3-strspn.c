#include "main.h"
/**
 * _strspn - Main function
 * @s: Address of s
 * @accept: Address of accept
 *
 * Return: C
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n;
	int c;

	c = 0;
	for(i = 0; s[i]; i++)
	{
		if (s[i] != 32)
		{
			for (n = 0; accept[n]; n++)
			{
				if (s[i] == accept[n])
				{
					n++;
				}
			}
		}
		else
		{
			return (c);
		}
	}
	return(c);
}

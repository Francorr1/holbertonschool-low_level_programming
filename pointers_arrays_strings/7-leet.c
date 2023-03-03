#include "main.h"
/**
 * leet - Main Function
 * @s: Address of s
 *
 * Return: The new string
 */
char *leet(char *s)
{
	char og[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int rep[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i;
	int n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; og[n]; n++)
		{
			if (s[i] == og[n])
			{
				s[i] = rep[n];
			}
		}
	}
	return (s);
}

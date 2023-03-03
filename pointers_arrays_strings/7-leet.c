#include "main.h"
/**
 *
 *
 */
char *leet(char *s)
{
	char og[10] = {97, 101, 111, 116, 108, 65, 69, 79, 84, 76};
	char rep[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i;
	int n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; og[n]; n++)
		{
			if (s[i] == og[n])
				s[i] = rep[n];
			else
				continue;
		}
	}
	return (s);
}

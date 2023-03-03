#include "main.h"
/**
 *
 *
 *
 */
char *cap_string(char *s)
{
	char cap[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;
	int n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; cap[n]; n++)
		{
			if (s[i] == cap[n])
			{
				i++;
				s[i] -= 32;
			}
			else
			{
				continue;
			}
		}
	}
	return (s);
}

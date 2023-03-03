#include "main.h"
/**
 *
 *
 *
 */
char *cap_string(char *s)
{
	char[12] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;
	int n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; char[n]; n++)
		{
			if (s[i] == char[n])
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

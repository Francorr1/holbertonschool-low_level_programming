#include "main.h"
/**
 * rev_string - Main function
 * @s: address of s
 */
void rev_string(char *s)
{
	int i;
	int j;
	char nst[*s];

	j = 0;
	for (i = 0; s[i]; i++)
	{
		continue;
	}
	i -= 1;
	for (; s[i]; i--)
	{
		nst[j] = s[i];
		j++;
	}
	*s = j;
}

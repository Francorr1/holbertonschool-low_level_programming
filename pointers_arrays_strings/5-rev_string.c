#include "main.h"
/**
 * rev_string - Main function
 * @s: address of s
 */
void rev_string(char *s)
{
	int i;
	int j;
	char str[];

	j = 0;
	for (i = 0; s[i]; i++)
	{
		continue;
	}
	i -= 1;
	for (; s[i]; i--)
	{
		str[j] = s[i];
		j++;
	}
}

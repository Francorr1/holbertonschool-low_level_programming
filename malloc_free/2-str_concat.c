#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Main function
 * @s1: A string
 * @s2: Another string
 *
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, tot, i, x;
	char *p;

	for (len1 = 0; s1[len1]; len1++)
		continue;
	for (len2 = 0; s2[len2]; len2++)
		continue;
	tot = len1 + len2;
	p = malloc(sizeof(char) * (tot + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < tot; i++)
	{
		while (i < len1)
		{
			x = 0;
			p[i] = s1[x];
			x++;
			continue;
		}
		while (i < len2)
		{
			x = 0;
			p[i] = s2[x];
			x++;
			continue;
		}
	}
	return (p);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Main function
 * @s1: First string
 * @s2: Second string
 * @n: An int
 *
 * Return: The result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *p;

	for (len1 = 0; s1[len1]; len1++)
		continue;
	for (len2 = 0; s2[len2]; len2++)
		continue;
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	i--;
	for (j = 0; j <= n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}

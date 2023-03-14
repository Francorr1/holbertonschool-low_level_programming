#include <stdio.h>
/**
 * _strdup - Main function
 * @str: A string
 *
 * Return: The result
 */
char *_strdup(char *str)
{
	int i;
	int x;
	char *ma;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[]; i++)
		continue;
	ma = malloc(sizeof(str) * i);
	if (ma == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		ma[x] = str[x];
	return (ma);
}

#include "main.h"
/**
 * _strcmp - Main function
 * @s1: Address of s1
 * @s2: Address of s2
 *
 * Return: Result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	res = 0;
	for (i = 0; s1[i] == s2[i]; i++)
		continue;
	if (s1[i] != s2[i])
		res = s1[i] - s2[i];
	if (s1[i] == s2[i])
		res = 0;
	return (res);
}

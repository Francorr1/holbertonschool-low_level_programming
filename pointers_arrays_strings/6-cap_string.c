#include "main.h"
/**
 * cap_string - Main Function
 * @s: Address of s
 *
 * Return: The result
 */
char *cap_string(char *s)
{
	char cap[14] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, '\n'};
	int i;
	int n;

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			n = 0;
			for (; cap[n]; n++)
			{
				if (s[i] == cap[n])
				{
					i++;
					s[i] = s[i] - 32;
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			continue;
		}
	}
	return (s);
}

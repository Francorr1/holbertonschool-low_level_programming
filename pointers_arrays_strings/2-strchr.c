nclude "main.h"
/**
 * _strchr - Main function
 * @s: Address of s
 * @c: char c
 *
 * Return: something, I don´t know what
 */
char *_strchr(char *s, char c)
{
	int i;
	char ret = '/0';

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			char ret = &s[i];
			break;
		}
	}
	return (ret);
}

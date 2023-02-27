#include "main.h"
/**
 * _strlen - Main function
 * @s: Address of s
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

#include "main.h"
/**
 * _strncpy - Main function
 * @dest: Address of dest
 * @src: Address of src
 * @n: an int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

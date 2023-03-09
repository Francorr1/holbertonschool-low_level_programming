#include "main.h"
/**
 * _strcat - Main function
 * @dest: Address of dest
 * @src: Address of src
 *
 * Return: Returns the address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int ij;
	int n;

	n = 0;
	ij = 0;
	for (i = 0; src[i]; i++)
		continue;
	for (j = 0; dest[j]; j++)
		continue;
	ij = i + j;
	for (; j <= ij; j++)
	{
		dest[j] = src[n];
		n++;
	}
	return (dest);
}

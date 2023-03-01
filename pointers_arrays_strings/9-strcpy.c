#include "main.h"
/**
 * *_strcpy - Main Function
 * @dest: Address of dest
 * @src: Address of src
 *
 * Return: Returns the address of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

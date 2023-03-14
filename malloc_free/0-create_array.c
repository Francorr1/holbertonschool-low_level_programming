#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Main function
 * @c: A pointer to c
 * @size: The size lmao
 *
 * Return: The result
 */
char *create_array(unsigned int size, char c)
{
	char *ma;

	if (size == 0)
	{
		return (NULL);
	}
	ma = malloc(sizeof(c) * size);
	if (ma == NULL)
	{
		return (NULL);
	}
	return (ma);
}

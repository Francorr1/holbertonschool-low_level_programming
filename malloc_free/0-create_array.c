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
	*c = malloc(size);
	int i;

	if (*c == NULL)
	{
		return (NULL);
	}
	for (i = 0; c[i]; i++)
	{
		continue;
	}
	if (i == 0)
	{
		return (NULL);
	}
	return (c);
}

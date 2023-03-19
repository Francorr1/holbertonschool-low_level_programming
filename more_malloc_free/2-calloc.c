#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Main function
 * @nmemb: An int
 * @size: another int
 *
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return ('\0');
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}

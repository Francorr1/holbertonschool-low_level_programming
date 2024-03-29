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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size *= nmemb;
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = 0;
	return (p);
}

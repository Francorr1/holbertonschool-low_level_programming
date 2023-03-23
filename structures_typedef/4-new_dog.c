#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _storemem - Stores a given string on memory
 * @str: Said string
 *
 * Return: Pointer to the saved string
 */
char *_storemem(char *str)
{
	char *p;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		continue;
	p = malloc((sizeof(char) * len) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
/**
 * new_dog - Creates a new dog
 * @name: It's name
 * @age: It's age
 * @owner: It's owner
 *
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogx;

	dogx = malloc(sizeof(dog_t));
	if (dogx == NULL)
		return (NULL);
	dogx->name = _storemem(name);
	if (dogx->name == NULL)
	{
		free(dogx);
		return (NULL);
	}
	dogx->owner = _storemem(owner);
	if (dogx->owner == NULL)
	{
		free(dogx->name);
		free(dogx);
		return (NULL);
	}
	dogx->age = age;
	return (dogx);
}

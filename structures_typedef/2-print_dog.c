#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the dog's info
 * @d: Pointer to the dog's structure
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (d == NULL)
	{
		printf("");
		return;
	}
	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);
	if (age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);
	if (owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}

#include "dog.h"
/**
 * init_dog - Inits the dog structure
 * @d: pointer to d
 * @name: It's name
 * @age: It's age
 * @owner: It's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

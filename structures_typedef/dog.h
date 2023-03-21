#ifndef structureofadog
#define structureofadog
/**
 * struct dog - Structure of a dog
 * @name: It's name
 * @age: It's age
 * @owner: It's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - sog structure
 * @name: its name
 * @age: its age
 * @owner: its owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
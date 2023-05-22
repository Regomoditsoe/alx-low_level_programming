#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  A function that initialize a variable of type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: how old the dog is
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the struct type struct dog
 * @d: the pointer to the struct
 * @name: the name
 * @age: the age number
 * @owner: the owner variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

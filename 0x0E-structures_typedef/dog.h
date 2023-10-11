#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - defines a new type
 * @name: what is called
 * @age: the years
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

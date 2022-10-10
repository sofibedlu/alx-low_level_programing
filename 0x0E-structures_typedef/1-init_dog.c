#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: poiter to the variable
 * @name: name
 * @age: age
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

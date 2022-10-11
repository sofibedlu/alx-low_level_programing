#include "dog.h"
#include <stddef.h>

/**
 * new_dog - create new dog
 * @name: name of a dog
 * @age: age
 * @owner: owner
 * Return: poiter to new object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newDog;
	dog_t *p;

	p = &newDog;
	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
		return (p);
	}
	else
		return (NULL);

}

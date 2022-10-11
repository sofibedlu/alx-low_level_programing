#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: name of a dog
 * @age: age
 * @owner: owner
 * Return: poiter to new object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p != NULL)
	{
		p->name = malloc(sizeof(char) * strlen(name) + 1);
		if (p->name == NULL)
		{
			free(p);
			return (NULL);
		}
		p->owner = malloc(sizeof(char) * strlen(owner) + 1);
		if (p->owner == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}
		p->name = strcpy(p->name, name);
		p->owner = strcpy(p->owner, owner);
		p->age = age;
		return (p);
	}
	else
		return (NULL);

}

#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define property of dog
 * @name: name of the dog
 * @age: age
 * @owner: who is the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

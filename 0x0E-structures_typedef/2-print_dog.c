#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to the object
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d == NULL)
		printf("%s", "");
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

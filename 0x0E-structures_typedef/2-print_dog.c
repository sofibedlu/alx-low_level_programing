#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to the object
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: ",
		d->name != NULL ? name : "(nil)",
		d->age, d->owner != NULL ? owner : "(nil)");
	}
}

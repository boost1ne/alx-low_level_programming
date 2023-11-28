#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dogs information
 * @d : a pointer to struct dog to print
****/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "Name: (nil)";
	if (d->owner == NULL)
		d->owner = "nil";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

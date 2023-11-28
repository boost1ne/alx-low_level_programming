#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes a variable of type struct dog
 * @d: a pointer to struct dog to intialize
 * @name: name to initialize;
 * @age: age to initialize;
 * @owner: owner to initialize;
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog);
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
}
~

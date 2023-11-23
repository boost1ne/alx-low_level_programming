#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory and checks for it
 * @b: input ti size
 * Return: pointer to the allocated memory or
****/
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	exit(98);

	return (m);
}

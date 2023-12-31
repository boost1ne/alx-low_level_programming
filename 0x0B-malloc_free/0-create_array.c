#include "main.h"
#include <stdlib.h>

/**
 * create_array - func to create an array of charts
 * @size: Size of the array
 * @c: character to be passed to the array
 * Return: A pointer to filled array or null if it fails
****/

char *create_array(unsigned int size, char c)
{


	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (array == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - func to create an array of charts
 * @size: Size of the array
 * @c: character to be passed to the array
 * Return: A filled array or null if its empty
****/

char *create_array(unsigned int size, char c)
{

	if (size == 0)
	{
		return (NULL);
	}

	char *array;

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	int counter;

	for (counter = 0; counter < size; counter++)
	{
		array[counter] = c;
	}

	return (array);
}

#include <stdlib.h>
#include "main.h"
/**
 * _strdup - fucntion duplicates string passed in argument
 * @str : input string
 * Return: a pointer to a new duplicate string
**/

char *_strdup(char *str)
{
	char *dupString;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	/*Get the length of the passed string we want to duplicate*/
	i = 0;

	while (str[i] != '\0')
	{
		i++;/*Here we store the length*/
	}

	dupString = malloc(sizeof(char) * (i + 1)); /*+1 for null terminator*/

	if (dupString == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		dupString[j] = str[j];
	}

	return (dupString);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concates two strings
 * @s1: input direction
 * @s2: string to copy
 * Return: full string or Null in case if fail
***/
char *str_concat(char *s1, char *s2)
{
	char *concString;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	j = 0;

	while (s2[j] != '\0')
		j++;

	concString = malloc(sizeof(char) * (i + j + 1));

	if (concString == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatString[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++; i++)
		conactString[i] = s2[j];

	return (concatString);
}

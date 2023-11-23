#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenaes two strings
 * @s1: first string
 * @s2: second string
 * @n: number of first characters of s2
 * Return: pointer to concatenated S1 and s2 or NULL in case of fail
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concnString;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;

	while (s1[l1] != '\0')
		l1++;
	/*Size of s2*/

	l2 = 0;

	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	concnString = malloc(sizeof(char) * (l1 + n + 1));

	if (concnString == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concnString[i] = s1[i];

	for (j = 0; j < n; j++)
		concnString[i + j] = s2[j];

	return (concnString);

}

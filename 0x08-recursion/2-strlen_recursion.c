#include "main.h"

/**
 * _strlen_recursion - Recursive function calculates the length of a string
 *
 * @s: given string input
 *
 * Return: string's length
**/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

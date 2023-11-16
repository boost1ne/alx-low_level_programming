#include "main.h"

/**
 * _strlen_recursion - Recursive function calculates the length of a string
 *
 * @s: given string input
 *
 * Return: 0 (success) and 1 in case of error
**/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
	return (0);
}

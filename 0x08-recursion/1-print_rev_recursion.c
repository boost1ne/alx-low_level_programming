#include "main.h"

/**
 * _print_rev_recursion - A recursive function that print a string in reverse
 *
 * @s: pointer to the string - input string to be printed
 *
 * Return: nothing
 *
**/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

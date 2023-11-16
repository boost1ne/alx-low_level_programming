#include "main.h"

/**
 * _print_rev_recursion - A recursive function that print a string in reverse
 *
 * @s: pointer to the string - input string
 *
 * Return: nothing
 *
**/

void _print_rev_recursion(char *s)
{
	if (*s != '\n')
		_putchar(*s);
		_print_rev_recursion(s + 1);
	if (*s == '\n')
		_putchar('\n');
}

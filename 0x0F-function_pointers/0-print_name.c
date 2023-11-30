#include "fonction_pointers.h"

/**
 * print_name - prints a given name
 * @name: pointer to name string we want to print
 * f - pointer to our function
 * Return: Nothing
 ****/


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Prints list if all arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
**/

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

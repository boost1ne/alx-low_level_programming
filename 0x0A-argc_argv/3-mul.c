#include "main.h"
#include <stdio.h>

/**
 * main - Multiplication of two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * * Return: Always 0 (Success)
**/

int main(int argc, char **argv)
{
	(void)argv;
	int nb1, nb2, result;

	result = nb1 * nb2;

	if (argc >= 2)
	{
		printf("%d\n", result);

	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}

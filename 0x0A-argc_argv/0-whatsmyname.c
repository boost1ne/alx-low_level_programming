#include <stdio.h>
#include "main.h"
/**
 * main  - Starting point of program execution
 *@argc: count
 *@argv: string array of command-line arguments
 *Return: Always 0 (success)
***/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("My name is %s\n", *argv);
	return (0);
}

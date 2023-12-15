#include "main.h"
#include <unistd.h>

/**
 * print_binary -  prints the binary representation of a number.
 * @n: a given nmber we want to convert
 *
 * Return: the binary form
****/

void print_binary(unsigned long int n)
{
	int bit;

	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		bit = (n & 1) + '0';
		_putchar(bit);
	}
	else
		_putchar('0');
	}
}

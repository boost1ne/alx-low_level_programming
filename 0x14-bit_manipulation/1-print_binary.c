#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: a given nmber we want to convert
 *
 * Return: the binary form
****/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1 << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		int bit = (n & mask) ? 1 : 0;

		_putchar(bit + '0');

		mask >>= 1;
	}
}

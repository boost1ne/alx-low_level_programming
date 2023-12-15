#include "main.h"

/**
 * print_binary - print binary equivalent of the decimal number
 * @n: number to be printed in binary
 */
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

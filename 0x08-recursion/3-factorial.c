#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: given number
 * Return: value of the number's focatorial
 *
**/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);

}

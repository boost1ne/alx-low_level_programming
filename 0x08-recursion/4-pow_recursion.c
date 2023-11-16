#include "main.h"

/**
* _pow_recursion - number raised to the power of another number
* @x: the base
* @y: the exponent
* Return: given power
**/

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y < 0)
		return (1 / _pow_recursion(x, -y));
	return (1);
}

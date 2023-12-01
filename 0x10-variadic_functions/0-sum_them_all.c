#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - variadic func clclts the sum of undef nb of args
 *@n: named given param
 *
 *Return: result of calculated sum or 0 of n == 0
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);

}

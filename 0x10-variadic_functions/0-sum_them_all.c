#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - variadic func clclts the sum of undef nb of args
 *@n: named given param
 *
 *Return: result of calculated sum
**/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
		va_end(args);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);

}

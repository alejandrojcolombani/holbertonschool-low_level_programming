#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: sum of all arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	int x;
	va_list args;

	va_start(args, n);

	s = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s += x;
	}

	va_end(args);

	return (s);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to function
 * @...: a variable number of paramters to calculate the sum of
 * Return: If n == 0 - 0
 * Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int s, sum = 0;

	if (n == 0)

		va_start(ar, n);
	for (s = 0; s < n; s++)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);
}

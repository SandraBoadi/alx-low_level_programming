#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * prints_numbers - prints numbers, followed by a new line.
 * @seperator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: a variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
       	unsigned int m = 0;

	va_start(numb, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(numb, int));
	}	
	if (separator != NULL && m < n - 1)
	{
		printf("%s", separator);
		printf(" ");
	}
	printf("\n");
	va_end(numb);
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print strings - print string and separator by a separator
 * @separator: sring variable
 * @n: unknown number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myset;
	char *str;
	unsigned int index;

	va_start(myset, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(myset, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myset);
}

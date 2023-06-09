#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int a = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	tmp = n;
	for (; n != 0; n = n >> 1, a++)
		;

	for (a -= 1; a >= 0; a--)
		_putchar('0' + ((tmp >> a) & 1));
}

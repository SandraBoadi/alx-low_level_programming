#include "main.h"

/**
 * print_line - drwaing straight line in the terminal
 * @n: the character to be used
 * Return: always 0(Success)
 */
void print_line(int n)
{
	int o;

	for (o = 0; o < n; o++)
	{
		putchar('');
	}
	_putchar('\n');
}

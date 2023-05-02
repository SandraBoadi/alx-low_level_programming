#include "main.h"

/**
 * print_diagonal - drawing a diagonal line on terminal
 * @n: the character to be used
 * Return: always 0(Success)
 */
void print_diagonal(int n)
{
	int m, r
		;
	if (n <= 0)
		_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (r = 0; r < m; r++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

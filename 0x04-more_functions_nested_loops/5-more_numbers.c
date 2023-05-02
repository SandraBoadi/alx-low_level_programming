#include "main.h"

/**
 * print_diagonal - drawing a diagonal line on terminal
 * @n: the character to be used
 * Return: always 0(Success)
 */
void print_diagonal(int n)
{
	int o, p
                ;
	if (n <= 0)
		_putchar('\n');
        for (o = 0; o < n; o++)
        {
                for (p = 0; p < o; p++)
                {
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

}

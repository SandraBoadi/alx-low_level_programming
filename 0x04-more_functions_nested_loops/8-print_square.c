#include "main.h"

/**
 *  print_square - printing squares
 *  @size: size of the square
 *  Return: void
 */
void print_square(int size)
{
	int b, y;

	if (size <= 0)
		_putchar('\n');
	for (b = 0; b < size; b++)
	{
		for (y = 0; y < (size); y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

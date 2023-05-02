#include "main.h"
/**
* more_numbers - printing numbers 10 times from 0 to 14
* Return: void
*/
void more_numbers(void)
{
	int s, b;

	for (s = 1; s <= 10; s++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}

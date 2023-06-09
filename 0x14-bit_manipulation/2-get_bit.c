#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: base number
 * @index: index to fetch
 * Return: return 1 if it works or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}

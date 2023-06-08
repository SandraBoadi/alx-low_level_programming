#include "main.h"

/**
* binary_to_uint - Converts a binary number ta an unsigned int
* @b: constant char pointer
*
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	int a, multiplier;
	unsigned int number;

	if (!b)
		return (0);


	for (a = number = 0; b[a] != 0; a++)
		if (b[a] != '0' && b[a] != '1')
			return (number);

	for (a -= 1, multiplier = 0; a >= 0; a--, multiplier++)
	{
		if (b[a] == '0')
			continue;

		number += 1 << multiplier;
	}

	return (number);
}

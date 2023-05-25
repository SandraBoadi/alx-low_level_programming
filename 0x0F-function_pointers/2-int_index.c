#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array - the array
 * @size - element size in array
 * @cmp - pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size <= 0)
	{
		return (-1);
	}
	for (m = 0; m < size; m++)

		if (cmp(array[m]) != 0)
		{
			return (m);
		}
	return (-1);
}

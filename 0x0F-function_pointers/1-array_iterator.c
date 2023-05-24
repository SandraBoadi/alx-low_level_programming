#include "function_pointers.h"

/**
 * array_iterator - function execution
 * @size - array size
 * @array - the array
 * @action - the pointer to function
 * Return: empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  m;

	if (array ==  NULL || size == 0)
	{
		return;
	}
	for (m = 0; m < size; m++)
	{
		action(array[m]);

	}
}

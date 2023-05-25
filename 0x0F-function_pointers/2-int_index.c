#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: element size in array
 * @cmp: pointer to the function for camparison
 * Return: -1 if no match,otherwie the index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array != NULL && cmp != NULL  && size > 0)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]))
			{
				return (m);
			}
		}
	}
	return (-1);
}

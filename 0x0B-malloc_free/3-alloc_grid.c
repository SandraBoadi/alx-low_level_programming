#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **omg;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	omg = malloc(sizeof(int *) * height);

	if (omg == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		omg[a] = malloc(sizeof(int) * width);

		if (omg[a] == NULL)
		{
			for (; a >= 0; a--)
				free(omg[a]);

			free(omg);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			omg[a][b] = 0;
	}

	return (omg);
}


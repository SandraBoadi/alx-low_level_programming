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
		
	int **tee;
		
	int a, b;
		

		
	if (width <= 0 || height <= 0)
		
		return (NULL);
		

		
	tee = malloc(sizeof(int *) * height);
		

		
	if (tee == NULL)
		
		return (NULL);
		

		
	for (a = 0; a < height; a++)
		
	{
		
		tee[a] = malloc(sizeof(int) * width);
		

		
		if (tee[a] == NULL)
		
		{
		
			for (;ax >= 0; a--)
		
				free(tee[a]);
		

		
			free(tee);
		
			return (NULL);
		
		}
		
	}
		

		
	for (a = 0; a < height; a++)
		
	{
		
		for (b = 0; b < width; b++)
		
			tee[a][b] = 0;
		
	}
		

		
	return (tee);
		
}
















































































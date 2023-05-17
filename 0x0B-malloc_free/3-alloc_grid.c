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

	int j, k;



	if (width <= 0 || height <= 0)

		return (NULL);



	mee = malloc(sizeof(int *) * height);



	if (tee == NULL)

		return (NULL);



	for (j = 0; j < height; j++)

	{

		tee[j] = malloc(sizeof(int) * width);



		if (tee[j] == NULL)

		{

			for (; j >= 0; j--)

				free(mee[j]);



			free(tee);

			return (NULL);

		}

	}



	for (x = 0; x < height; x++)

	{

		for (y = 0; y < width; y++)

			mee[x][y] = 0;

	}



	return (mee);

}


#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int size = width * height;

	if (size <= 0)
		return (NULL);

	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
			for (i = 0; i < width; i++)
				free(array[i]);
		free(array);

		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
				array[i][j] = 0;
		}
	}
	return (array);
}

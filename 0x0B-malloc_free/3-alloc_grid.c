#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Each element of the grid should be initialized to 0
 * If width or height is 0 or negative, return NULL
 * Return: NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, n;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	iarray = malloc(sizeof(*iarray) * height);
	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(**iarray) * width);
		if (iarray[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(iarray[i]);
			free(iarray);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}

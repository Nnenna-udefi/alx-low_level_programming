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

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);
	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @array: array
 * @cmp: function pointer
 * If size <= 0, return -1
 * If no element matches, return -1
 * Return: index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

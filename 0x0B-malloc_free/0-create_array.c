#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: number of bytes
 * @c: input
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

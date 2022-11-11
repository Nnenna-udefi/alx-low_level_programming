#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		return (b);
	}

	b = malloc(new_size);
	if (b == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		b[i] = copy[i];
	free(ptr);
	return (b);
}

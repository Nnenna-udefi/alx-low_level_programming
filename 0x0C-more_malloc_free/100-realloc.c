#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *b;
	unsigned int i;

	ptr = malloc(old_size);

	for (i = 0; i < old_size; i++)
	{
		if (new_size > old_size)
			b = realloc(void *ptr * new_size);
		else if (new_size == old_size)
			return (ptr);
		else if (ptr == NULL)
			ptr = b;
		else if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
}

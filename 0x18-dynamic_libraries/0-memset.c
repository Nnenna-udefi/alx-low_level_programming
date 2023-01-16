#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: memory size to be filled
 * @s: pointer
 * @b: constant byte
 * Return: pointer to the mempry area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

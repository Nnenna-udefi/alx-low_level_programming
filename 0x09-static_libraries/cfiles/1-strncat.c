#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * while using at most n bytes from src
 * @src: string that will not be terminated if it has n or more bytes
 * @dest: string to concatenate to
 * @n: bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
